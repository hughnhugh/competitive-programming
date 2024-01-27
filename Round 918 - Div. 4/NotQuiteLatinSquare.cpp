#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        string first, second, third;
        cin >> first >> second >> third;

        string row;

        for (int i=0; i<3; i++) {
            if (first[i] == '?') row = first;
        }

        for (int i=0; i<3; i++) {
            if (second[i] == '?') row = second;
        }

        for (int i=0; i<3; i++) {
            if (third[i] == '?') row = third;
        }

        char res = 'A' ^ 'B' ^ 'C' ^ '?';


        for (int i=0; i<3; i++) {
            res ^= row[i];
        }

        cout << res << endl;
    }
}