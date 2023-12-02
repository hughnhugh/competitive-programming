#include <bits/stdc++.h>

using namespace std;

int dfs(int n, int lengths[3]) {
    if (n == 0) return 1;
    if (n - lengths[0] >= 0) {
        dfs(n-lengths[0], lengths);
    }
    if (n - lengths[1] >= 0) {
        dfs(n-lengths[0], lengths);
    }
    if (n - lengths[2] >= 0) {
        dfs(n-lengths[0], lengths);
    }

    
}

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int lengths[3] = {a, b, c};
    sort(lengths, lengths + 3);

    cout << dfs(n, lengths);

    // Each step we can subtract a, b, or c from n and add to count;
    // 
    return 0;
}