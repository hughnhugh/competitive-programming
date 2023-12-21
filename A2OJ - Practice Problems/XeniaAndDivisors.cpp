#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> numCounts;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numCounts[num] += 1;
        if (num == 5 || num == 7) {
            cout << -1;
            return 0;
        }
    }

    // Combinations
    // { 1, 2, 4 }
    // { 1, 2, 6 }
    // { 1, 3, 6 }

    map<int, int> comboCount;

    auto it = numCounts.find(3);

    if (it != numCounts.end()) {
        if (numCounts[1] < it->second || numCounts[6] < it->second) {
            cout << -1;
            return 0;
        }
        comboCount[3] += it->second;
        numCounts[1] -= it->second;
        numCounts[6] -= it->second;
        numCounts.erase(it);

    }

    it = numCounts.find(4);

    if (it != numCounts.end()) {
        if (it->second < 0 || numCounts[1] < it->second || numCounts[2] < it->second) {
            cout << -1;
            return 0;
        }
        comboCount[4] += it->second;
        numCounts[1] -= it->second;
        numCounts[2] -= it->second;
        numCounts.erase(it);
    }

    it = numCounts.find(6);

    if (it != numCounts.end()) {
        if (it->second < 0 || numCounts[1] != it->second || numCounts[2] != it->second) {
            cout << -1;
            return 0;
        }
        comboCount[6] += it->second;
        numCounts[1] -= it->second;
        numCounts[2] -= it->second;
        numCounts.erase(it);
    }

    for (auto it=numCounts.begin(); it != numCounts.end(); ++it) {
        if (it->second != 0) {
            cout << -1;
            return 0;
        }
    }

    for (auto it=comboCount.begin(); it != comboCount.end(); ++it) {
        string s;
        if (it->first == 3) {
            s = "1 3 6";
        } else if (it->first == 4) {
            s = "1 2 4";
        } else if (it->first == 6) {
            s = "1 2 6";
        }

        for (int i=0; i<it->second; i++) {
            cout << s << "\n";
        }
    }

    return 0;
}