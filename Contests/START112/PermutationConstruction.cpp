#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test, s;
    cin >> test >> s;
    
    while (test--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for (int i=0; i<n; i++) {
            cin >> arr[i]; 
        }

        sort(arr.begin(), arr.end());
    }   
}