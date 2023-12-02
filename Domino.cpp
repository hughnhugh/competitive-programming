#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int evenOdd = 0;
    int upperSum = 0;
    int lowerSum = 0;

    for (int i=0; i<n; i++) {
        int upper, lower;
        cin >> upper >> lower;

        upperSum += upper;
        lowerSum += lower;

        if (upper % 2 != lower % 2) evenOdd++;
    }

    bool upperEven = true;
    bool lowerEven = true;

    if (upperSum % 2 != 0) upperEven = false;
    if (lowerSum % 2 != 0) lowerEven = false;

    if (upperEven && lowerEven) {
        cout << 0;
    } else if (n == 1) {
        cout << -1;
    } else if (!upperEven && !lowerEven) {
        if (evenOdd > 0) cout << 1;
        else cout << -1;
    } else {
        cout << -1;
    }  

    return 0;
}