#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int left = 0;
    int right = k;

    int sum = 0;

    int heights[n];

    for (int i=0; i<n; i++) {
        int height;
        cin >> height;

        heights[i] = height;
    }

    for (int i=0; i<k; i++) {
        sum += heights[i];
    }

    int minJ = 1;
    int minSum = sum;

    while (right < n) {
        sum += heights[right++] - heights[left++];
        if (sum < minSum) {
            minJ = left+1;
            minSum = sum;
        }
    }

    cout << minJ;
    return 0;
}