#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    string seq;
    cin >> seq;

    int first[n];
    int second[n];

    bool consecutiveLess = true;
    bool consecutiveMore = true;

    for (int i=0; i<n; i++) {
        first[i] = stoi(seq.substr(i, 1));
        second[i] = stoi(seq.substr(2*n-1-i, 1));
    }

    sort(first, first + n);
    sort(second, second + n);

    for (int i=0; i<n; i++) {
        if (first[i] <= second[i]) consecutiveMore = false;
        if (first[i] >= second[i]) consecutiveLess = false;
    }

    if (consecutiveLess || consecutiveMore) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}