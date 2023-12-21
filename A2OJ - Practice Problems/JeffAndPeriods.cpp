#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int determineSequence(const vector<int>& sequence) {
    if (sequence.size() == 1) return 0;
    int diff = sequence[1] - sequence[0];
    for (int i=2; i<sequence.size(); i++) {
        if (sequence[i] - sequence[i-1] != diff) return -1;
    }
    return diff;
}

int main() {
    int n;
    cin >> n;

    map<int, vector<int>> sequences;

    for (int i=0; i<n; i++) {
        int seq;
        cin >> seq;

        sequences[seq].push_back(i);
    }

    vector<string> res;

    for (auto it=sequences.begin(); it != sequences.end(); ++it) {
        vector<int> sequence = it->second;

        int diff = determineSequence(it->second);

        if (diff != -1) res.push_back(to_string(it->first) + " " + to_string(diff));
    }

    cout << res.size() << "\n";

    for (auto it=res.begin(); it != res.end(); ++it) {
        string output = *it;
        cout << output << "\n";
    }

    return 0;
}