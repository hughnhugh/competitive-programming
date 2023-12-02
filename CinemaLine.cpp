#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int fifty = 0;
    int twentyFives = 0;

    for (int i=0; i<n; i++) {
        int bill;
        cin >> bill;

        if (bill == 50) {
            twentyFives--;
            fifty++;
        } else if (bill == 100) {
            if (fifty > 0) {
                fifty--;
                twentyFives--;
            } else {
                twentyFives -= 3;
            }
        } else {
            twentyFives++;
        }

        if (twentyFives < 0 || fifty < 0) {
            cout << "NO";
            return 0;
        }
    }
    
    cout << "YES";
    return 0;;
}