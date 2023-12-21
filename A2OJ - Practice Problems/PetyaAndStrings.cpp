#include <iostream>
#include <string>

using namespace std;

int main() {
    string first, second;

    cin >> first >> second;

    for (int i=0; i<first.length(); i++) {
        first[i] = tolower(first.at(i));
        second[i] = tolower(second.at(i));
    }

    int diff = first.compare(second);

    if (diff < 0) cout << "-1";
    else if (diff == 0) cout << "0";
    else cout << "1";
    
    return 0;
}
