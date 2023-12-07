#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;

        if (num <= 3) {
            cout << "NO" << "\n";
            continue;
        }

        long long root = sqrt(num);
        if (root * root == num && isPrime(root)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}