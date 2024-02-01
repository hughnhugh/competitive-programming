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

        int minWins = n / 2 + 1;

        string res(n, 'P');

        int currentWins = 0;

        for (int i=0; i<n; i++) {
            if (s[i] == 'R') currentWins++;
        }

        int index = n-1;
        while (currentWins < minWins && index >= 0) {
            if (s[index] == 'P') res.at(index) = 'S';
            else if (s[index] == 'S') res.at(index) = 'R';
            else {
                index--;
                continue;
            }
            index--;
            currentWins++;  
        }

        cout << res << endl;
    }
}