#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int prev;
    cin >> prev;
    int groups = 1;

    for (int i=1; i<n; i++) {
        int current;
        cin >> current;

        if (current != prev) {
            groups++;
            prev = current;
        }
    }

    cout << groups;

    return 0;
}