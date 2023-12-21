#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first) return a.second < b.second;
    return b.first < a.first;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> scores(n);

    for (int i=0; i<n; i++) {
        cin >> scores[i].first >> scores[i].second;
    }

    sort(scores.begin(), scores.end(), ::compare);

    pair<int, int> kth = scores[k-1];
    int left = k-2;
    int right = k;

    int shared = 1;
    while (scores[left].first == kth.first && scores[left--].second == kth.second) {
        shared++;
    }
    while (scores[right].first == kth.first && scores[right++].second == kth.second) {
        shared++;
    }

    cout << shared;

    return 0;
}