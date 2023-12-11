#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    string s;
    cin >> n >> m >> s;

    int usedPlain = 0;
    int usedLogo = 0;

    int currentPlain = m;
    int currentLogo = 0;

    for (int i=0; i < n; i++) {
        char day = s[i];
        if (day == '0') {
            currentLogo += usedLogo;
            usedLogo = 0;
            currentPlain += usedPlain;
            usedPlain = 0;
        } else if (day == '1') {
            if (currentPlain == 0 && currentLogo == 0) usedLogo++;
            else if (currentPlain > 0) {
                currentPlain--;
                usedPlain++;
            } else {
                currentLogo--;
                usedLogo++;
            }
        } else if (day == '2') {
            if (currentLogo != 0) currentLogo--;
            usedLogo++;
        }
    }

    cout << currentLogo + usedLogo;
}