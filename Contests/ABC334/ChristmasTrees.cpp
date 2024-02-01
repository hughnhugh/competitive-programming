#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long a, m, l, r;
    cin >> a >> m >> l >> r;

    l -= a;
    r -= a;

    if (l < 0 && r < 0) {
        long long treesBeforeR = abs(r / m);
        if (r % m == 0) treesBeforeR--;
        long long treesBeforeL = abs(l / m);

        cout << treesBeforeL - treesBeforeR << "\n";
    } else if (l < 0) {
        long long treesBeforeL = abs(l / m);
        long long treesBeforeR = r / m;

        cout << treesBeforeR + treesBeforeL + 1 << "\n";
    } else {
        long long treesBeforeL = l / m;
        if (l % m == 0) treesBeforeL--;
        long long treesBeforeR = r / m;

        cout << treesBeforeR - treesBeforeL << "\n";
    }
}