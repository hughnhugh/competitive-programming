#include <bits/stdc++.h>
using namespace std;

int lastPassed = 0;

int binarySearch(int left, int right, const vector<pair<int, int>> & segment) {
    if (left > right) return lastPassed;
    int mid = (left + right) / 2;
    int prevLeft = 0;
    int prevRight = 0;

    bool increase = false;

    for (int i=0; i<segment.size(); i++) {
        prevLeft = prevLeft - mid;
        prevRight = prevRight + mid;

        if (prevRight < segment[i].first || prevLeft > segment[i].second) {
            increase = true;
            break;
        }

        prevLeft = max(prevLeft, segment[i].first);
        prevRight = min(prevRight, segment[i].second);
    }

    if (increase) return binarySearch(mid+1, right, segment);
    else {
        lastPassed = mid;
        return binarySearch(left, mid-1, segment);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while(test--){
        int n;
        cin >> n;

        int right = 0;
        
        vector<pair<int, int>> segment(n);
        for (int i=0; i<n; i++) {
            cin >> segment[i].first >> segment[i].second;

            right = max(right, segment[i].second);
        }

        int minJump = binarySearch(0, right, segment);

        cout << minJump << "\n";
    }
}