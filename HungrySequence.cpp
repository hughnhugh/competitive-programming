#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 2;

    vector<int> primes;

    while (primes.size() < n) {
        bool isPrime = true;

        for (int j=0; j < primes.size() && j<=sqrt(primes.size()); j++) {
            if (current % primes[j] == 0) {
                isPrime = false;
                break;
            } 
        }

        if (isPrime) {
            primes.push_back(current);
        }

        if (current == 2) current++;
        else current += 2;
    }

    
    for (int j=0; j<primes.size(); j++) {
        cout << primes[j] << " ";
    }

    return 0;
}