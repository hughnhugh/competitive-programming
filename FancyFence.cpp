#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int test;
    cin >> test;

    set<int> angles;
    int multiple = 1; // Triangle or the first polygon
    int sides = 3;

    double angle = (double) multiple++ * 180 / sides++;

    while (angle <= 179) {
        if (abs(angle - round(angle)) < 0.0000000001) angles.insert(angle);
        angle = (double) multiple++ * 180 / sides++;
    }

    while (test--) {
        int a;
        cin >> a;
        if (angles.find(a) != angles.end()) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}