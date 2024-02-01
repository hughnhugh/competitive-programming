#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> sortedArr(arr);
        sort(sortedArr.begin(), sortedArr.end());

        vector<long long> prefix(n + 1);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + sortedArr[i];
        }

        for (int i = 0; i < n; i++) {
            int current = arr[i];
            auto it = std::lower_bound(sortedArr.begin(), sortedArr.end(), current);
            int index = std::distance(sortedArr.begin(), it) + 1; // Adjust for 1-based index
            int currentSum = prefix[index];
            for (int j = index; j < n; j++) {
                if (prefix[j] >= sortedArr[j]) {
                    index = j+1;
                    currentSum+=sortedArr[j];
                }
                else {
                    break;
                }

            }
            cout << index-1 << " ";
        }
        cout << "\n";
    }

    return 0;
}