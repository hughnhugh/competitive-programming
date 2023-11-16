#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;
    cin >> word;

    int upperCount = 0;

    for (int i=0; i<word.length(); i++) {
        if (isupper(word[i])) upperCount++;
        word.at(i) = toupper(word.at(i));;
    }

    if (upperCount > word.length() / 2)  {
        cout << word;
    }
    else {
        for (int i=0; i<word.length(); i++) {
            word.at(i) = tolower(word.at(i));;
        }
        cout << word;
    }
    
    return 0;
}