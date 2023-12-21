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

        bool makeNZero = false;

        int copy = n;

        while (copy > 0) {
            if (copy % 4 == 0 || copy % 3 == 0) {
                makeNZero = true;
                break;
            }
            copy -= 3;
        }

        if (makeNZero) {
            cout << "YES" << "\n";
            continue;
        }

        while (n > 0) {
            if (copy % 4 == 0 || copy % 3 == 0) {
                makeNZero = true;
                break;
            }
            n -= 4;
        }

        if (makeNZero) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}