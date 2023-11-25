#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    map<int, int> pagesDay;

    for (int i=1; i<=7; i++) {
        int pages;
        cin >> pages;

        if (pages == 0) continue;
        sum += pages;
        pagesDay[sum] = i;
    }

    int remainder = n % sum;
    int day = remainder != 0 ? pagesDay.lower_bound(remainder)->second : prev(pagesDay.end())->second;

    cout << day;

    return 0;
}