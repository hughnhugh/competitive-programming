#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, s, k;
    cin >> n >> s >> k;

    int sum = 0;

    for (int i=0; i<n; i++) {
        int p, q;
        cin >> p >> q;
        sum += p*q;
    }

    if (sum >= s) cout << sum;
    else cout << sum + k; 
}