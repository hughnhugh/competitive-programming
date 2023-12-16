#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1s2,t1t2;
    cin >> s1s2 >> t1t2;

    vector<char> points = {'A', 'B', 'C', 'D', 'E'};

    auto findDistance = [&](char a, char b) {
        int posA = find(points.begin(), points.end(), a) - points.begin();
        int posB = find(points.begin(), points.end(), b) - points.begin();
        int distance = abs(posA - posB);
        if (distance > 2) distance = 5 - distance;
        return distance;
    };

    if (findDistance(s1s2[0], s1s2[1]) == findDistance(t1t2[0], t1t2[1])) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}