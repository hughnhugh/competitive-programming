#include <iostream>
#include <set>
#include <string>

using namespace std;

bool distinct_digits_in_year(int year) {
    string year_str = to_string(year);
    set<char> digits(year_str.begin(), year_str.end());

    return digits.size() == year_str.length();
}

int main() {
    int year;
    cin >> year;

    while (!distinct_digits_in_year(++year))

    cout << year;

    return 0;
}






