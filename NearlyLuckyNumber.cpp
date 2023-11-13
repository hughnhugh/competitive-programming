#include <iostream>
#include <string>

using namespace std;


int main() {
    string input;

    cin >> input;

    int count = 0;

    for (int i=0; i<input.length(); i++) {
        if (input[i] == '4' or input[i] == '7') {
            count++;            
        }
    }

    if (count == 4 or count == 7) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }


    return 0;
}