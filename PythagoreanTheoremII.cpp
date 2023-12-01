#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int i=1; i<=n; i++) {
        int cs = i*i;
        for (int j=1; j<i; j++) {
            int as = j*j;
            double b = sqrt(cs-as);
            
            if (abs(b-round(b)) < (0.000000000000001)) count++;
        }
    }

    cout << count / 2 << "\n";

    return 0;
}