#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<int, int> & a, const pair<int, int> & b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> laptops(n);

    for (int i=0; i<n; i++) {
        cin >> laptops[i].first >> laptops[i].second;
    }

    vector<pair<int, int>> laptopsCopy(laptops);

    sort(laptops.begin(), laptops.end());
    sort(laptopsCopy.begin(), laptopsCopy.end(), ::compare);

    for (int i=0; i<n; i++) {
        if (laptops[i].first != laptopsCopy[i].first) {
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";
}