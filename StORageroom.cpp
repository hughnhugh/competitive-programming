#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<pair<string, vector<int>>> res;

    for (int i=0; i<t; i++) {
        int n; 
        cin >> n;

        int m[n][n];
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                cin >> m[j][k];
            }
        }

        vector<int> solution;

        if (n == 1) {
            solution.push_back(7);
            res.push_back(make_pair("YES", solution));
        } else {
            for (int j=0; j<n; j++) {
                int common = INT_MAX;
                for (int k=0; k<n; k++) {
                    if (j != k) common &= m[k][j];
                }
                solution.push_back(common);
            }

            bool found = true;

            for (int j=0; j<n; j++) {
                for (int k=0; k<n; k++) {
                    if (j != k && m[j][k] != (solution[j] | solution[k])) {
                        found = false;
                        break;
                    }
                }
            }
            
            if (found) res.push_back(make_pair("YES", solution));
            else res.push_back(make_pair("NO", solution));
        } 
    }

    for (int i=0; i<res.size(); i++) {
        pair<string, vector<int>> current = res[i];
        if (current.first == "NO") cout << current.first << "\n";
        else {
            cout << current.first << "\n";
            for (int j=0; j<current.second.size(); j++) {
                cout << current.second[j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}