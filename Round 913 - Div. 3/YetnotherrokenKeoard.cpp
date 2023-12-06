#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while(test--){
        string s;
        cin >> s;

        int upperDelCount = 0;
        int lowerDelCount = 0;

        string res = "";
        res.reserve(s.length());

        for (int i=s.length()-1; i>=0; i--) {
            char current = s[i];
            if (islower(current)) {
                if (current == 'b') {
                    lowerDelCount++;
                } else if (lowerDelCount > 0) {
                    lowerDelCount--;
                } else {
                    res+=current;
                }
            } else {
                if (current == 'B') {
                    upperDelCount++;
                } else if (upperDelCount > 0) {
                    upperDelCount--;
                } else {
                    res+=current;
                }
            }
        }
        reverse(res.begin(), res.end());
        cout << res << "\n";
    }
    return 0;
}