#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	// your code goes here
	int test;
	cin >> test;
	
	while (test--) {
	    int n;
	    cin >> n;

        vector<long long> arr(n);

        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int cursed = 0, runningSum = arr[0], nextLargerIndex = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] <= runningSum) {
                while (nextLargerIndex < n && arr[nextLargerIndex] <= runningSum) {
                    nextLargerIndex++;
                }
                if (nextLargerIndex == n) {
                    cursed = n - i;
                    break;
                }
                swap(arr[i], arr[nextLargerIndex]);
            }
            runningSum += arr[i];
        }

        cout << cursed << "\n";

        for (int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }

        cout << "\n";
	}
	return 0;
}
