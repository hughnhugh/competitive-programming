#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;

    vector<long long> sleigh(n);
    
    for (int i = 0; i < n; i++) {
        cin >> sleigh[i];
    }

    sort(sleigh.begin(), sleigh.end());

    vector<long long> sum(n);

    sum[0] = sleigh[0];

    for (int i = 1; i < n; i++) {
        sum[i] = sum[i-1] + sleigh[i];
    }

    for (int i = 0; i < q; i++) {
        long long x;
        cin >> x;

        auto it = lower_bound(sum.begin(), sum.end(), x);
        int index = distance(sum.begin(), it);

        if (it != sum.end()) {
            if (sum[index] == x) index++;
            cout << index << "\n";
        } else cout << n << "\n";
    }
}