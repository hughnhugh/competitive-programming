#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int a, b;
        cin >> a >> b;
        if (b < a) {
            int temp = a;
            a = b;
            b = temp;
        }

        if (a <= 1 && b <= 2) cout << "No" << endl;
        else if (a % 2 == 0) {
            cout << "Yes" << endl;
        } else if (b % 2 == 0 && b / 2 != a) {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}