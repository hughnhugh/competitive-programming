#include <iostream>
#include <string>

using namespace std;

int main() {
    string first, second;
    cin >> first >> second;
    
    if (first.length() != second.length()) {
        cout << "NO";
        return 0;
    }

    int firstDiffIndex = -1;
    int secDiffIndex = -1;

    for (int i=0; i<first.length(); i++) {
        if (first[i] != second[i]) {
            if (firstDiffIndex == -1) {
                firstDiffIndex = i;
            } else {
                secDiffIndex = i;
                break;
            }
        }
    }

    if (secDiffIndex == -1) {
        cout << "NO";
        return 0;
    }
    
    char temp = second[firstDiffIndex];

    second.at(firstDiffIndex) = second.at(secDiffIndex); 
    second.at(secDiffIndex) = temp;

    if (second == first) cout << "YES";
    else cout << "NO";
    
    return 0;
}