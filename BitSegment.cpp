#include <iostream>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;

    int left = INT_MAX;
    int right = INT_MIN;
    int index = 0;

    for (int i=1; i<=n; i++) {
        int l, r;
        cin >> l >> r;

        
        if (l <= left && r >= right) index = i;
        else if (l < left) index = 0;
        else if (r > right) index = 0;

        left = min(l, left);
        right = max(r, right);
    }

    if (index == 0) cout << -1;
    else {
        cout << index;
    }
    return 0;
}