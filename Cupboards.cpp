#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int leftOpen = 0, rightOpen = 0;

    for (int i=0; i<n; i++) {
        int l, r;
        cin >> l >> r;

        if (l == 1) leftOpen++;
        if (r == 1) rightOpen++;
    }

    cout << min(leftOpen, n-leftOpen) + min(rightOpen, n-rightOpen);

    return 0;
}