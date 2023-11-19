#include <iostream>

using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k; 

    // If n is odd, more odds than even
    // Number of odds is n / 2 + 1 if odd or n / 2 if even
    // Number of evens is n / 2
    // Index where evens start is number of odds
    // k - number of odds = mth even
    // perhaps is just (k-num odd) * 2
    long long int odds = n / 2;
    if (n % 2 == 1) odds++;

    if (k > odds) cout << (k-odds) * 2;
    else cout << k * 2 - 1;

    return 0;
}