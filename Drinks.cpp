#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double totalPercent = 0;
    for (int i=0; i<n; i++) {
        int drinkPercent;
        cin >> drinkPercent;

        totalPercent += (double) drinkPercent / n;
    }

    cout.precision(12);

    cout << fixed << totalPercent;

    return 0;
}