#include <bits/stdc++.h>

using namespace std;

int main() {
    int odd = 0, even = 0;
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int cookies;
        cin >> cookies;

        if (cookies % 2 == 0) even++;
        else odd++;
    }

    if (odd % 2 == 0) cout << even;
    else cout << odd;
}