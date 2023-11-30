#include <iostream>

using namespace std;

int main() {
    int y, k, n;

    cin >> y >> k >> n;
    bool noOutput = true;

    int startIndex = y < k ? k-y : k-y%k;

    for (int x=startIndex; x<=n-y; x+=k) {
        noOutput = false;
        cout << x << " ";
    }

    if (noOutput) {
        cout << -1;
    }

    return 0;
}