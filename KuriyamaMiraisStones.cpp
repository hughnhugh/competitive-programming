#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n;

    vector<int> stones(n);
    vector<long long> prefixSum(n+1, 0), sortedPrefixSum(n+1, 0);
    
    for (int i=0; i<n; i++) {
        cin >> stones[i];
        prefixSum[i+1] = prefixSum[i] + stones[i];
    }

    vector<int> sortedStones(stones);
    sort(sortedStones.begin(), sortedStones.end());

    for (int i=0; i<n; i++) {
        sortedPrefixSum[i+1] = sortedPrefixSum[i] + sortedStones[i];
    }

    cin >> m;

    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;

        long long sum = 0;
        if (type == 1) sum += prefixSum[r] - prefixSum[l-1];
        else sum += sortedPrefixSum[r] - sortedPrefixSum[l-1];
        cout << sum << "\n";
    }
}