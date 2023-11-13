#include <iostream>
#include <string>

using namespace std;

int main() {
    string input; 
    int n;

    cin >> n >> input;
    int count = 0;
    char last;

    for (int i=0; i<n-1; i++) {
        last = input[i];
        if (last == input[i+1]) {
            count++;
        }
    }

    cout << count;




    return 0;
}