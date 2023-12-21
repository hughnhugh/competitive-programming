#include <iostream>

using namespace std;


int main() {
    int n;

    cin >> n;

    int array [n];

    for (int i=0; i < n; i++) {
        cin >> array[i]; 
    }

    int temp;
    int count = 1;

    bool found = false;

    for (int i = 0; i < n; i++) {    
        for (int j = i; j < n; j++) {
            if (array[j] == count) {
                temp = array[i];
                array[i] = count;
                array[j] = temp;
                count++;
                found = true;
                break;                
            }
        }
        if (found) {
            found = false;
        }
        else {
            cout << count;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << count;
    }


    return 0;
}