#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n, k;
        cin >> n >> k;

        string s = "";

        for (int i=0; i<n; i++) {
            char current = 'a';
            for (int j=0; j<k; j++) {
                s += (current + j);
            }
        }

        cout << s << endl;
    }
}