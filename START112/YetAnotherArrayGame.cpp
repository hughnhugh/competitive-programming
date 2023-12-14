#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test, s;
    cin >> test >> s;
    
    while (test--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i=0; i<n; i++) {
            cin >> arr[i]; 
        }

        sort(arr.begin(), arr.end());

        int sum = 0;
        int count = 0;

        if (s == 0) {
            if (n%2==0) {
                while (count < n/2) {
                    sum+=arr[1+count++];
                }
            } else {
                while (count < n/2+1) {
                    sum+=arr[count++];
                }
            }
            cout << sum << "\n";
        } else {
            cout << sum << "\n";
        }
    }   
}