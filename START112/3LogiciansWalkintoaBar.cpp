#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin >> test;
	
	while (test--) {
	    int n;
        string s;
	    cin >> n >> s;

        bool wantBeer = true;
        bool dontKnow = true;
	    
        for (int i=0; i<n; i++) {
            char current = s[i];
            if (current == '0') {
                wantBeer = false;
            }
            if (wantBeer && current == '1') {
                if (i == n-1) cout << "YES" << "\n";
                else cout << "IDK" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
	}
	return 0;
}
