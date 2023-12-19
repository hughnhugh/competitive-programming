#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int test;
    cin >> test;

    while (test--) {
        string s;
        cin >> s;
        int zeros = 0;
        int ones = 0;

        for (char bit : s) {
            if (bit == '0') zeros++;
            else ones++;
        }

        int cost = 0;

        for (int i=0; i<s.length(); i++) {
            if (s[i] == '0') {
                if (ones > 0) ones--;
                else {
                    cost = s.length() - i;
                    break;
                }
            } else {
                if (zeros > 0) zeros--;
                else {
                    cost = s.length() - i;
                    break;
                }
            }
        }

        cout << cost << "\n";
    }

}