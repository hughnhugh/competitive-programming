#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n;
        cin >> n;

        set<int> s;
        vector<int> a;

        for (int i=0; i<n; i++) {
            int current;
            cin >> current;
            if (s.find(current) == s.end()) {
                a.push_back(current);
                s.insert(current);
            }
        }

        sort(a.begin(), a.end());

        int left = 0;
        int right = 1;
        int maxEle = 1;

        while (right < a.size()) {
            if (a[right] - a[left] <= n-1) {
                maxEle = max(maxEle, right-left+1);
                right++;
            } else {
                left++;
            }
        }

        cout << maxEle << endl;
    }
}