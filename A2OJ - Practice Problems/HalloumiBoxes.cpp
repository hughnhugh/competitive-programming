#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> res;

    for (int i=0; i<t; i++) {
        int n, k;
        cin >> n >> k;

        int first;
        cin >> first;
        bool increasing = true;
        for (int j=1; j<n; j++) {
            int current;
            cin >> current;
            if (current < first) increasing = false;
            first = current;
        }

        if (k > 1) res.push_back("YES");
        else if (increasing) res.push_back("YES");
        else {
            res.push_back("NO");
        }
    }

    for (int i=0; i<res.size(); i++) {
        cout << res[i] << "\n";
    }

    return 0;
}