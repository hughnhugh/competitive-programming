#include <bits/stdc++.h>

using namespace std;

long long next_lucky(int num) {
    if (num == 0) return 4;

    long long res = 0;
    long long carryRes = 4;

    long long multiplier = 1;

    while (num > 0) {
        long long lsf = num % 10;
        
        if (lsf == 4) res += multiplier * 4;
        else if (lsf == 7) res += multiplier * 7;
        else if (lsf < 4) res = carryRes; 
        else if (lsf < 7) res = carryRes / 10 + 7 * multiplier;
        else {
            res = carryRes;
            num += 10;
        }
        
        carryRes = carryRes * 10 + 4;
        multiplier *= 10;
        num /= 10;
    }

    return res;
}

int main() {
    long long l, r;
    cin >> l >> r;

    long long sum = 0;

    while (l<=r) {
        long long nextLucky = next_lucky(l);
        sum += nextLucky * (min(r, nextLucky) - l + 1);
        l = nextLucky+1;
    }

    cout << sum << endl;
}