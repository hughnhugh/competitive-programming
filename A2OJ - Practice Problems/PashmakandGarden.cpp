#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int ydiff = abs(y2-y1);
    int xdiff = abs(x2-x1);

    if (xdiff == 0) {
        cout << x1 + ydiff << " " << y1 << " " << x2 + ydiff << " " << y2;
    } else if (ydiff == 0) {
        cout << x1 << " " << y1 + xdiff << " " << x2 << " " << y2 + xdiff ;
    } else if (xdiff == ydiff) {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    } else {
        cout << -1;
    }
}