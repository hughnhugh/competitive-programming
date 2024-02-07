#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n;
        string s;

        cin >> n >> s;

        int right = 0;
        int left = 0;

        auto it = s.find('B');

        auto rightIt = find(s.rbegin(), s.rend(), 'B');

        if (it != string::npos) {
            cout << (s.size() - 1 - distance(s.rbegin(), rightIt) - it +1) << endl;
        } else {
            cout << 0 << endl;
        }
    }
}