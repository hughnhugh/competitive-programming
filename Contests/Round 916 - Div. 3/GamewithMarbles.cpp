#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b(n);

        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        for (int i=0; i<n; i++) {
            cin >> b[i];
        }

        priority_queue<pair<long long, long long>> greatestMarbles;

        for (int i=0; i<n; i++) {
            greatestMarbles.push(make_pair(a[i] + b[i], i));
        }

        long long runningScore = 0;

        for (int i=0; i<n; i++) {
            pair<long long, long long> currentGreatest = greatestMarbles.top();
            int index = currentGreatest.second;
            greatestMarbles.pop();
            if (i%2 == 0) {
                runningScore += a[index] - 1;
            } else {
                runningScore -= b[index] - 1;
            }
        }

        cout << runningScore << "\n";
    }
}