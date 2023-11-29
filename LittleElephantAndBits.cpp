#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    bool zeroFound = false;

    for (int i=0; i<n.length(); i++) {
        if (!zeroFound && n[i] == '0') {
            zeroFound = true;
        } else if (!zeroFound && i == n.length()-1) {
        } else {
            cout << n[i];
        }
    }

    return 0;
}