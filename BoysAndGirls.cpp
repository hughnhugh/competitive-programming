#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int b, g;
    cin >> b >> g;

    while (b != 0 && g != 0) {
        if (b > g) {
            cout << "BG";
        } else {
            cout << "GB";
        }
        g -= 1;
        b -= 1;
    }

    for (int i=0; i<max(b, g); i++) {
        if (b != 0) cout << "B";
        if (g != 0) cout << "G";
    }

    return 0;
}