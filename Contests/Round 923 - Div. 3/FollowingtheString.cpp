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

        vector<char> chars;

        vector<int> sequence(n);

        for (int i=0; i<n; i++) {
            cin >> sequence[i];
        }

        for (char c = 'a'; c <= 'z'; c++) {
            chars.push_back(c);
        }
        map<int, vector<char>> charMap; 

        charMap[0] = chars;

        string s = "";

        for (int i = 0; i<n; i++) {
            int level = sequence[i];
            char last = charMap[level].back();
            charMap[level].pop_back();

            charMap[level+1].push_back(last);
            s += last;
        }

        cout << s << endl;
    }
}