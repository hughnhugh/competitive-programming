#include <iostream>
#include <utility>
#include <vector>

using namespace std;



int main() {
    vector<pair<int, int>> points;
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;

        points.push_back(make_pair(x, y));
    }

    int supercentral = 0;

    for (int i=0; i<n; i++) {
        bool hasLeft = false, hasRight = false, hasAbove = false, hasBelow = false;
        pair<int, int> first = points[i];

        for (int j=0; j<n; j++) {
            if (j == i) continue;
            pair<int, int> second = points[j];
            if (first.first == second.first) {
                if (first.second < second.second) hasAbove = true;
                if (first.second > second.second) hasBelow = true;
            }
            if (first.second == second.second) {
                if (first.first < second.first) hasRight = true;
                if (first.first > second.first) hasLeft = true;
            }
            if (hasLeft && hasRight && hasAbove && hasBelow) {
                supercentral++;
                break;
            }
        }
    }

    cout << supercentral;

    return 0;    
}