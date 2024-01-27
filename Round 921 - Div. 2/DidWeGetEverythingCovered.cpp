#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n, k, m;
        string s;

        cin >> n >> k >> m >> s;

        int count = 0;

        set<char> letters; 

        char first = 'a';

        string res = "";

        for (int i=0; i<m; i++) {
            if (letters.size() == 0) {
                for (int j=0; j<k; j++) {
                    letters.insert(first+j);
                }
            }

            char current = s[i];

            if (letters.count(current) != 0) letters.erase(current);
            if (letters.empty()) {
                res += current;
                count++;
            }
            if (count >= n) break;
        }

        if (count >= n) cout << "YES" << endl;
        else {
            while (res.length() < n) {
                if (letters.size() != 0) {
                    res += *letters.begin();
                } else {
                    res += 'a';
                }
            }
            cout << "NO" << endl << res << endl;
        }
    }
}