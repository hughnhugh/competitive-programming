#include <iostream>

using namespace std;

int main() {
    int lights[3][3];

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> lights[i][j];
        }
    }

    int res[3][3] = {0};

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            res[i][j] += lights[i][j];
            if (i < 2) res[i+1][j] += lights[i][j];
            if (j < 2) res[i][j+1] += lights[i][j];
            if (i > 0) res[i-1][j] += lights[i][j];
            if (j > 0) res[i][j-1] += lights[i][j];
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            int lightStatus = (res[i][j] % 2) ^ 1;
            cout << lightStatus;
        }
        cout << endl;
    }

    return 0;
}