#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int start = 0, end = n-1;

    while (start < n-1 && arr[start] <= arr[start+1]) {
        start++;
    }

    if (start == n-1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    end = start;

    while (end < n-1 && arr[end] >= arr[end+1]) {
        end++;
    } 

    reverse(arr.begin() + start, arr.begin() + end + 1);

    if (is_sorted(arr.begin(), arr.end())) {
        cout << "yes\n" << start+1 << " " << end+1;
    } else {
        cout << "no";
    }

    return 0;
}