#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string t;

    cin >> s >> t;

    string build = "";

    for (int i=s.length()-1; i >= 0; i--) {
        build += s[i];
    }

    if (build == t) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}