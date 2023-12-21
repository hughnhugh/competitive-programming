#include <iostream>

using namespace std;

int main() {
    int rowPos;
    int colPos;

    for (int i=1; i <= 5; i++) {
        for (int j=1; j <= 5; j++) {
            int temp;
            cin >> temp;
            if (temp == 1) {
                rowPos = i;
                colPos = j;         
            }
        }
    }

    cout << abs(3-rowPos) + abs(3-colPos);

    return 0;
}