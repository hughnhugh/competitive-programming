#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k, g, m;
    cin >> k >> g >> m;

    int glass = 0;
    int mug = 0;

    for (int i=0; i<k; i++) {
        if (glass == g) glass = 0;
        else if (mug == 0) mug = m;
        else {
            int remainingInGlass = g-glass;
            if (mug >= remainingInGlass) {
                glass += remainingInGlass;
                mug -= remainingInGlass;
            } else {
                glass += mug;
                mug = 0;
            }
        }
    }

    cout << glass << " " << mug;
}