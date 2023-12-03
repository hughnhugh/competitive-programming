#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin >> n;

        string nums;
        cin >> nums;

        int ones = 0;
        int zeros = 0;
        int different = 0;
        bool zeroOne = false; 


        for (int i=0; i<n; i++) {
            if (nums[i] == '0') zeros++;
            else ones++;
        }

        for (int i=0; i<n-1; i++) {
            if (nums[i] != nums[i+1]) zeroOne = true;
        }

        if (zeroOne || zeros > ones) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}