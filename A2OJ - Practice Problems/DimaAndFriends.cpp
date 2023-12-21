#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;


    int total = 0;
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;

        total += num;
    }

    int ways = 0;
    for (int i=1; i<=5; i++) {
        if ((total + i) % (n+1) != 1) ways++;
    } 

    cout << ways;
    return 0;
}