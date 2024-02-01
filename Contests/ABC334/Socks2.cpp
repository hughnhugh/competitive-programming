#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    vector<int> arr(k);
    vector<int> pref(k);
    vector<int> suf(k);
    
    for (int i=0; i<k; i++) {
        int current;
        cin >> current;
        arr[i] = current;
    }

    int sum = 0;

    if (k % 2 == 1) {
        sum = INT_MAX;
        pref[0] = 0;
        for (int i=2; i<k; i+=2) {
            pref[i] = arr[i-1] - arr[i-2] + pref[i-2];
        }

        suf[k-1] = 0;
        for (int i=k-3; i>=0; i-=2) {
            suf[i] = arr[i+2] - arr[i+1] + suf[i+2];
        }

        for (int i=0; i<k; i+=2) {
            sum = min(sum, suf[i] + pref[i]);
        }
        
    } else {
        for (int i=0; i<k; i+=2) {
            sum += arr[i+1] - arr[i];
        }
    }

    cout << sum << "\n";
}