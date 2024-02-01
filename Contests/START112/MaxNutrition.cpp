#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin >> test;
	
	while (test--) {
	    int n;
	    cin >> n;
	    
	    vector<int> types(n);
	    vector<int> values(n);
	    
	    for (int i=0; i<n; i++) {
	        cin >> types[i];
	    }
	    
	    for (int i=0; i<n; i++) {
	        cin >> values[i];
	    }
	    
	    map<int, int> maxType;

        for (int i=0; i<n; i++) {
            int type = types[i];
            int value = values[i];
	        if (value > 0 && value > maxType[type]) maxType[type] = value;
	    }

        int nutritionalValue = 0;

        for (auto it = maxType.begin(); it != maxType.end(); ++it) {
            nutritionalValue += it->second;
        }

        cout << nutritionalValue;
	}
	return 0;
}
