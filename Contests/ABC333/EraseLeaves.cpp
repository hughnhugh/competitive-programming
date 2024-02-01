#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    map<int, vector<int>> edges;

    for (int i=1; i<n; i++) {
        int u, v;
        cin >> u >> v;

        edges[u].push_back(v);
    }

    int deletions = 0;
}
