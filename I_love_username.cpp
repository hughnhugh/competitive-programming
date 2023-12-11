#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int amazing = 0;

    int best;
    cin >> best;

    int worst;
    worst = best;

    for (int i=1; i<n; i++) {
        int current;
        cin >> current;

        if (current < worst) {
            worst = current;
            amazing++;
        }
        if (current > best) {
            best = current;
            amazing++;
        }
    }

    cout << amazing;
    return 0;
}