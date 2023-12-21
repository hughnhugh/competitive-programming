#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

bool dragonComparator(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second < b.second;
    }
}

int main() {
    int s, n;
    cin >> s >> n;

    pair<int, int> dragons[n];

    for (int i=0; i<n; i++) {
        int dragonStrength, bonus;

        cin >> dragonStrength >> bonus;

        dragons[i] = make_pair(dragonStrength, bonus);
    }

    sort(dragons, dragons + n, dragonComparator);

    for (int i=0; i<n; i++) {
        int dragonStrength = dragons[i].first, bonus = dragons[i].second;

        if (s > dragonStrength) s += bonus;
        else {
            cout << "NO";
            return 0;
        }
    }
    
    cout << "YES";
    return 0;
}