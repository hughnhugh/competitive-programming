#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;

int mod(int a) {
    return (a % MOD + MOD) % MOD;
}

int main() {
    int x, y, n;
    std::cin >> x >> y >> n;

    vector<int> memo(7);
    
    memo[0] = mod(x);
    memo[1] = mod(y);

    for (int i = 2; i <= 5; i++) {
        memo[i] = mod(memo[i-1] - memo[i-2]);
    }

    std::cout << memo[(n-1)%6];
    return 0;
}