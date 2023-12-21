#include <iostream>
#include <string>

using namespace std;

int main() {
    string positions;
    cin >> positions;

    int consecutive = 1;
    char prev = positions.at(0);

    for (int i=1; i<positions.length(); i++) {
        char current = positions.at(i);
        if (current == prev) consecutive++;
        else {
            prev = current;
            consecutive = 1;
        }

        if (consecutive >= 7) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}