#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int array [n][3];
    int count = 0;

    for (int i=0; i<n; i++) {
        cin >> array[i][0] >> array[i][1];
        array[i][2] = 0;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i == j) {
                continue;
            }
            else {
                if (array[i][1] == array[j][0]) {
                    array[j][2] = 1;                    
                }
            }
        }
    }

    for (int i=0; i<n; i++) {
        if (array[i][2] == 0) {
            count++;
        }
    }

    cout << count;    

    return 0;
}