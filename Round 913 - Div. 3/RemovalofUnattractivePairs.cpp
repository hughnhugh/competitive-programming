#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while(test--){
        int n;
        string s;
        cin >> n >> s;

        map<char, int> letters;

        for (int i=0; i<n; i++) {
            char current = s[i];
            letters[current] += 1;
        }
        int maxOccurrence = 0;

        for (auto it=letters.begin(); it != letters.end(); ++it) {
            if (it->second > maxOccurrence) maxOccurrence = it->second;
        }
        int res = 0;

        if (n % 2 == 1) res = max(1, maxOccurrence-(n-maxOccurrence));
        else res = max(0, maxOccurrence-(n-maxOccurrence));

        cout << res << "\n";
    }
}