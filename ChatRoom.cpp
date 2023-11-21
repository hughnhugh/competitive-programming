#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    string hello = "hello";
    int index = 0;

    for (int i=0; i<word.length(); i++) {
        if (word.at(i) == hello.at(index)) index++;
        if (index == hello.length()) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}