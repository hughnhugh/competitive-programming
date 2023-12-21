#include <bits/stdc++.h>

using namespace std;

int determineParity(char c) {
    if (c == '#') return 1;
    return -1;
}

int main() {
    char cells[4][4];

    for (int i=0; i<4; i++) {
        string row;
        cin >> row;
        for (int j=0; j<4; j++) {
            cells[i][j] = row[j];
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            int sum = determineParity(cells[i][j]) + determineParity(cells[i][j+1]) + determineParity(cells[i+1][j]) + determineParity(cells[i+1][j+1]);
            if (abs(sum) >= 2) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}
