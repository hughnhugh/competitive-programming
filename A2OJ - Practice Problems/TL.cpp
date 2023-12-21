#include <iostream>


using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int minCorrect = INT_MAX;
    int maxCorrect = INT_MIN;

    for (int i=0; i<n; i++) {
        int correct;
        cin >> correct;

        if (correct < minCorrect) minCorrect = correct;
        if (correct > maxCorrect) maxCorrect = correct;
    }

    int minIncorrect = INT_MAX;

    for (int i=0; i<m; i++) {
        int incorrect;
        cin >> incorrect;

        if (incorrect < minIncorrect) minIncorrect = incorrect;
    }

    if (minIncorrect <= maxCorrect || 2 * minCorrect >= minIncorrect) {
        cout << -1;
        return 0;
    }

    cout << max(2 * minCorrect, maxCorrect);
    return 0;
}