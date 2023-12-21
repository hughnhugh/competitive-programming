#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<char, int>& a, const pair<char, int>& b) {
    return a.second > b.second; // Sort in descending order of frequency
}

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, int> letters;

    for (char letter : s) {
        letters[letter]++;
    }

    // Copy elements to a vector for sorting
    vector<pair<char, int>> vec(letters.begin(), letters.end());

    // Sort the vector by frequency
    sort(vec.begin(), vec.end(), compare);

    long long coins = 0;

    for (auto it = vec.begin(); it != vec.end() && k > 0; ++it) {
        long long current = min(it->second, k);
        coins += current * current;
        k -= current;
        if (k <= 0) break;
    }

    cout << coins;

    return 0;
}