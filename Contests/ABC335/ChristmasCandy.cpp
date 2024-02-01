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

        vector<int> arr(n);

        int res = 0; 

        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }

        int maxCandy = 0;

        for (int i=0; i<n; i++) {
            maxCandy = max(arr[i], maxCandy);
            if (maxCandy > arr[i]) res++;
        }

        cout << res << "\n";
    }
}