#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int fives = 0;
    int zeros = 0;

    for (int i=0; i<n; i++) {
        int current;
        cin >> current;
        if (current == 5) fives++;
        if (current == 0) zeros++;
    }

    fives = fives - (fives%9);

    if (zeros >= 1) {
        if (fives == 0) {
            cout << 0;
        } else {
            for (int i=0; i<fives; i++) {
                cout << 5;
            }

            for (int i=0; i<zeros; i++) {
                cout << 0;
            }
        }
    } else {
        cout << -1;
    }

    return 0;
}