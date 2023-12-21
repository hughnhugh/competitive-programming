#include <iostream>
#include <string>

using namespace std;

int main() {
    string remix;
    cin >> remix;
    size_t pos = 0;

    while ((pos = remix.find("WUB")) != string::npos) {
        if (pos != 0 && remix[pos - 1] != ' ') {
            remix.insert(pos, " ");
            remix.erase(pos+1, 3);
        }
        else remix.erase(pos, 3);
    }

    cout << remix << '\n';
    return 0;
}