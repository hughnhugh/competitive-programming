#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i=0; i<n; i++) {
        int current;
        cin >> current;

        sum += current;
    }

    int mod = sum % n;

    if (mod < 0) mod += n;

    cout << max(n - mod, n - 1);
    return 0;
}