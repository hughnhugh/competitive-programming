#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int actualPos = 0, dreamoonPos = 0, unknown = 0;
    for (char c : s1) actualPos += (c == '+') ? 1 : -1;
    for (char c : s2) {
        if (c == '?') unknown++;
        else dreamoonPos += (c == '+') ? 1 : -1;
    }

    int diff = abs(actualPos - dreamoonPos);
    if (diff > unknown || (unknown - diff) % 2 != 0) {
        cout << "0.000000000000\n";
    } else {
        int k = (unknown - diff) / 2;
        double prob = 1.0 / (1 << unknown); // Probability of one specific combination
        for (int i = 0; i < k; ++i) {
            prob *= (unknown - i);
            prob /= (i + 1);
        }
        cout.precision(12);
        cout << fixed << prob << "\n";
    }
    return 0;
}