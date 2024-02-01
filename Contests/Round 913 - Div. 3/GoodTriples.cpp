#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while(test--){
        int n;
        cin >> n;
        long long combinations = 1;

        while (n != 0) {
            int current = n % 10;
            n /= 10;

            // Calculate combinations of achieving a+b+c=current
            int currentCombinations = (current+2)*(current+1)/2;

            // Multiply this by number of combinations of subsequent currents
            combinations *= currentCombinations;
        }

        cout << combinations << "\n";
    }
}