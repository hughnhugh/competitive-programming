#include <bits/stdc++.h>
using namespace std;

void incrementSubarray(vector<int>& arr, int start, int end) {
    for (int i = start; i <= end; ++i) {
        arr[i]++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    vector<long long> arr(n);
    vector<long long> prefix(n+1);

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        prefix[i+1] = prefix[i] + arr[i];
    }

    vector<long long> arrCounts(n);

    for (int i=0; i<m; i++) {
        int l, r, x;
        cin >> l >> r >> x;

        // int sum = sumAll(l, r, arr)/(r-l+1);

        // for (int j=l; j <= r; j++) {
        //     arr[j] = ((r-l+1) * arr[j] + sum)/(r-l+1);
        // }
    }

}