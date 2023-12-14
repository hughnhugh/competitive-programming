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

        int cursed = 0;
        int sum = arr[0];
        int index = 0;
        for (int i=1; i<n; i++) {
            if (index <= i) index = i+1;
            if (arr[i] > sum) {
                sum += arr[i];
            } else {
                bool found = false;
                while (index < n) {
                    if (arr[index++] > sum) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cursed = n-i;
                    break;
                }
                else {
                    int temp = arr[i];
                    arr[i] = arr[index-1];
                    arr[index-1] = temp;
                    sum += arr[i];
                }
            }
        }

        cout << cursed << "\n";

        for (int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }

        cout << "\n";
	}
	return 0;
}
