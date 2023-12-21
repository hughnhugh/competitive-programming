#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, t;
    string a;

    cin >> n >> t >> a;

    for (int second=0; second<t; second++) {
        for (int i=0; i<n-1; i++) {
            if (a[i] == 'B' && a[i+1] == 'G') {
                swap(a[i], a[i+1]);
                i++;
            }
        }
    }

    cout << a << endl;

    return 0;
}