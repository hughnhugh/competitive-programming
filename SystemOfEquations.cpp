#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int pairs = 0;

    for (int a=0; a<1000; a++) {
        for (int b=0; b<1000; b++) {
            if (a*a + b == n && b*b + a == m) pairs++;
        }
    }

    cout << pairs;

    return 0;
}