#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;

    set<char> consonants = {'b', 'c', 'd'};

    while (test--) {
        int n;
        string s;

        cin >> n >> s;

        string result;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (count < 2) {
                result += s[i];
                count++;
            } else {
                if (i + 1 == n) {
                    result += s[i];
                    count = 0;
                } else if (consonants.find(s[i]) != consonants.end() && consonants.find(s[i + 1]) != consonants.end()) {
                    result += s[i];
                    result += '.';
                    count = 0;
                } else {
                    result += '.';
                    result += s[i];
                    count = 1;
                }
            }
        }

        cout << result << endl;
    }

}