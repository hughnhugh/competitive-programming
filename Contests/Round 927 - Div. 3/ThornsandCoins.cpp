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
        vector<char> s(n);
        for (int i=0; i<n; i++) {
            cin >> s[i];
        }

        int coins = 0;
        int right = 0;
        while (right < n) {
            if (s[right+1] == '@') {
                right++;
                coins++;
            } else if (s[right+2] == '@') {
                right+=2;
                coins++;
            } else if (s[right+2] == '.') {
                right+=2;
            } else if (s[right+1] == '.') {
                right++;
            } else {
                break;
            }
        }

        cout << coins << endl;
    }
}