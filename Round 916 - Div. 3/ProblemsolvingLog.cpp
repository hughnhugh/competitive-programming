#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> arr(26, 0);

        for (int i=0; i<s.length(); i++) {
            int letter = s[i] - 'A';
            arr[letter]++;
        }

        int solved = 0;

        for (int i=0; i<arr.size(); i++) {
            if (arr[i] >= i+1) solved++;
        }

        cout << solved << "\n";
    }
}