#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int calculateDivisors(int num) {
    int res = 0;
    for (int i=1; i<=sqrt(num); i++) {
        if (num % i == 0) {
            if (i != sqrt(num)) res+=2;
            else res += 1;
        }
    }
    return res;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int res = 0;
    map<int, int> memo;

    for (int i=1; i<=a; i++) {
        for (int j=1; j<=b; j++) {
            for (int k=1; k<=c; k++) {
                int num = i * j * k;
                if (!memo.count(num)) {
                    memo[num] = calculateDivisors(num);
                }

                res += memo[num];
                res %= 1073741824;
            }
        }
    }

    cout << res;

    return 0;
}