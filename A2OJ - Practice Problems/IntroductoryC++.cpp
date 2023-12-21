// This imports the c++ standard template library 
#include <bits/stdc++.h>

// This allows us to not have to specify the package when using std functions
using namespace std;

int main() {
    // This declares x as an integer and takes the next available console input (space separated) and saves it to variable x
    int x;
    cin >> x;

    // This adds 5 to x if x is divisible by 3 and x is positive
    if (x % 3 == 0 && x > 0) {
        x += 5;
    }
    
    // This prints x to the console
    cout << x;

    // This breaks out of the function and returns 0
    return 0;
}