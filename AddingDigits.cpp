#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, n;
    long long a;
    cin >> a >> b >> n;

    for (int i=0; i<=9; i++) {
        long long newA = a*10 + i;
        if (newA % b == 0) {
            cout << a << i;
            for (int i=0; i<n-1; i++) {
                cout << 0;
            }
            return 0;
        }
    }

    cout << -1;
}