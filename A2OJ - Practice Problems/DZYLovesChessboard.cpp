#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string rows[n];

    for (int i=0; i<n; i++) {
        string row;
        cin >> row;

        rows[i] = row;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (rows[i].at(j) == '.') {
                if ((i+j) % 2 == 0) cout << 'W';
                else cout << 'B';
            }
            else cout << '-';
        }
        cout << '\n';
    }

    return 0;
}