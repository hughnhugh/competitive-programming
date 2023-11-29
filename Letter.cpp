#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    map<char, int> letters;
    
    for (int i=0; i<s1.length(); i++) {
        char letter = s1[i];
        if (letter == ' ') continue;
        letters[letter] += 1;
    }

    for (int i=0; i<s2.length(); i++) {
        char letter = s2[i];
        if (letter == ' ') continue;
        if (letters[letter] <= 0) {
            cout << "NO";
            return 0;
        }
        letters[letter] -= 1;
    }

    cout << "YES";
    return 0;
}