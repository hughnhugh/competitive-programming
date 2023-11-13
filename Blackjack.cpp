#include <iostream>

using namespace std;

int main() {
    int input;

    cin >> input;
    int card = input - 10;

    // 3 Cases 1-9 & 11 - 4 combos, 10 - 15 combos, anything else - 0 combos
    if (card == 10) {
        cout << 15;
    }
    else if (card >= 1 and card <= 11 ) {
        cout << 4;
    }
    else {
        cout << 0;
    }

    return 0;
}