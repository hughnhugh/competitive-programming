#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first + a.second < b.first + b.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        for (int i=0; i<n; i++) {
            cin >> b[i];
        }

        vector<pair<int, int>> sum(n);

        for (int i=0; i<n; i++) {
            sum[i] = make_pair(a[i], b[i]);
        }

        sort(sum.begin(), sum.end(), compare);

        for (int i=0; i<n; i++) {
            cout << sum[i].first << " ";
        }

        cout << endl;

        for (int i=0; i<n; i++) {
            cout << sum[i].second << " ";
        }

        cout << endl;
    }
}