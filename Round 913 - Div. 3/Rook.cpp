#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        string pos;
        cin >> pos;

        int row = pos[1] - '0';
        int col = pos[0] - 'a' + 1;
        
        for (int i = 'a'; i <= 'h'; i++) {
            if (i != pos[0])
                cout << (char)i << pos[1] << "\n";
        }

        for (int i = 1; i <= 8; i++) {
            if (i != row) {
                cout << pos[0] << i << "\n";
            }
        }
    }
    return 0;
}
