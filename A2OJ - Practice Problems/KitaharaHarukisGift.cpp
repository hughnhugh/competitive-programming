#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int one = 0;
    int two = 0;

    for (int i=0; i<n; i++) {
        int weight;
        cin >> weight;

        if (weight == 100) one++;
        else two++;
    }

    int individualWeight = (two * 200 + one * 100) / 2;

    if (individualWeight % 100 == 50 || (individualWeight % 200 == 100 && one < 2)) cout << "NO";
    else cout << "YES";

    return 0;
}