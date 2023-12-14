#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin >> test;
	
	while (test--) {
	    int n, k;
	    cin >> n >> k;
	    
	    cout << n - (n/(k+1)*k) << "\n";
	}
	return 0;
}
