#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int res = 0;

    for (int i=0; i<n; i++) {
        string current;
        cin >> current;
        if (current.at(1) == '+') res++;
        if (current.at(1) == '-') res--;
    }

    cout << res;

    return 0;
}