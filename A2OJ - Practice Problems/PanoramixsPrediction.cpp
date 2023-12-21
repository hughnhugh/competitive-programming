#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;

    int maxDivisor = ceil(sqrt(num));

    for (int i=2; i<=maxDivisor; i++) {
        if (num % i == 0) return false;
    }

    return true;
}

int main() {
    int current, next;
    cin >> current >> next;

    for (int i=current+1; i<=next; i++) {
        if (i==next) {
            if (isPrime(i)) {
                cout << "YES";          
            } else {
                cout << "NO";
            }
        } else {
            if (isPrime(i)) {
                cout << "NO";
                break;
            }
        }
    }

    return 0;
}

