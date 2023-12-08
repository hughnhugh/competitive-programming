#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> times;
    int n;
    cin >> n;

    int cash = 0;

    for (int i=0; i<n; i++) {
        int h, m;
        cin >> h >> m;

        if (++times[h*60+m] > cash) cash = times[h*60+m];
    }

    cout << cash;
}