#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int a,b,c;
        cin >> a >> b >> c;

        if (a == b) cout << c << endl;
        else if (b == c) cout << a << endl;
        else if (a == c) cout << b << endl;
    }
}