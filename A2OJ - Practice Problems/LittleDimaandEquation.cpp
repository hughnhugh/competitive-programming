#include <bits/stdc++.h>

using namespace std;

int sum_digits(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> res;

    int sumUpperBound = 10*9;

    for (int i=1; i<sumUpperBound; i++) {
        long long x = pow(i, a) * b + c;

        if (x > 0 && x < 1000000000 && sum_digits(x) == i) {
            res.push_back(x);
        }
    }

    cout << res.size() << "\n";

    for (int i=0; i<res.size(); i++) {
        cout << res[i] << " ";
    }

}