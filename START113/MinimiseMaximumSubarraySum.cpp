#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int x, y;
        cin >> x >> y;

        if (y+1 >= x) cout << 1 << "\n";
        else if ((double)x / (y+1) > 2) cout << x + y * -2 << "\n";
        else {
            cout << 2 << "\n";
        }
    }
}