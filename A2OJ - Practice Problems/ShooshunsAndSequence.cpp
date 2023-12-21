#include <iostream>

using namespace std;

int main() {
    // k = 5
    // 1, 2, 3, 4, 5, 6, 5
    // 2, 3, 4, 5, 6, 5, 5, 
    // 3, 4, 5, 6, 5, 5, 6,
    // 4, 5, 6, 5, 5, 6, 5,
    // 5, 6, 5, 5, 6, 5, 5

    int n, k;
    cin >> n >> k;

    int nums[n];

    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int operations = n;
    int prev = nums[n-1];

    for (int i=n-1; i>=0; i--) {
        int current = nums[i];
        if (current == prev) operations--;
        else if (current != prev) {
            if (i >= k - 1) {
                cout << -1;
                return 0;
            }
            break;
        }
    }

    cout << operations;
    return 0;
}