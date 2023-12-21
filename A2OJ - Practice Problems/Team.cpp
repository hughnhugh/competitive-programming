#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int solution[n][3];

    for (int i=0; i<n; i++) {
        for (int j=0; j<3; j++) {
            cin >> solution[i][j];
        }
    }

    int count = 0;

    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int j=0; j<3; j++) {
            sum += solution[i][j];
        }
        if (sum >= 2) count++;
    }

    cout << count;

    return 0;
}