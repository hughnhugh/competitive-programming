#include <iostream>
#include <string>

using namespace std;


int main() {
    int n;

    cin >> n;

    string array [n];

    for (int i=0; i<n; i++) {
        string input;
        cin >> input;

        if (input.length() <= 10) {
            array[i] = input;
        }
        else {
            string build = "";
            build.push_back(input[0]);
            array[i] = build + to_string(input.length()-2) + input[input.length()-1];
        }
    }

    for (int i=0; i<n; i++) {
        cout << array[i] << endl;
    }
    

    return 0;
}