#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    int ones = 0;
    int zeroes = 0;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) ones++;
        else zeroes++;
    }

    int maxOnes = 0;

    for (int i = 0; i < n; i++) {
        int currentOnes = 0, currentZeroes = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] == 1) {
                currentOnes++;
            } else {
                currentZeroes++;
            }
            int onesAfterFlip = ones - currentOnes + currentZeroes;
            maxOnes = max(maxOnes, onesAfterFlip);
        }
    }

    cout << maxOnes << endl;
    return 0;
}

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     int totalOnes = 0;

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         if (arr[i] == 1) totalOnes++;
//     }

//     int maxGain = 0, currentGain = 0;
//     for (int i = 0; i < n; i++) {
//         // Convert 0 to 1 and 1 to -1
//         int value = (arr[i] == 0) ? 1 : -1;

//         currentGain += value;
//         if (currentGain < 0) {
//             currentGain = 0; // Reset the current gain if it becomes negative
//         }
//         maxGain = max(maxGain, currentGain); // Update maxGain if currentGain is greater
//     }

//     int maxOnes = totalOnes + maxGain;
//     cout << maxOnes << endl;
//     return 0;
// }