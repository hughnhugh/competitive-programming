#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;
    int array [n];

    int input;
    int count = 0;
    int sum = 0;


    for (int i=0; i < n; i++) {
        
        cin >> input;
        if (input < 0) {
            array[count] = input;
            count++;
        }
    }

    if (m > count) {
        m = count;
    }

    int temp, index, min;
    for (int i = 0; i < m; i++) {
        index = i;
        min = array[i];
        for (int j = 0; j < count; j++) {
            if (array[j] < min) {
                min = array[j];
                index = j;
            }
        }
        array[index] = 0;
        sum -= min;
    }

    cout <<  sum;

    return 0;
}