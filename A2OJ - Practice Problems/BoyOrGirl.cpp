#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string name;

    cin >> name;

    set<char> distinct(name.begin(), name.end());

    if (distinct.size() % 2 == 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
}