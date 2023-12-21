#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

/*

    a, 1
    b, 1
    c, 1



    c, 1
    d, 1
    e, 1
}

*/

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> letters;

    for (int i=0; i<s.length(); i++) {
        letters[s[i]] += 1;
    }

    int oddCount = 0;

    for (auto it=letters.begin(); it != letters.end(); ++it) {
        if (it->second % 2 == 1) oddCount++;
    }

    if (oddCount <= 1) {
        cout << "First";
        return 0;
    } else if (letters.size() == 2){
        cout << "Second";
        return 0;
    }
    string res = s.length() % 2 == 1 ? "First" : "Second";

    cout << res;
}