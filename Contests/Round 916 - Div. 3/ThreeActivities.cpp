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

        priority_queue<pair<int, int>> a;
        priority_queue<pair<int, int>> b;
        priority_queue<pair<int, int>> c;
    
        for (int i=0; i<n; i++) {
            int current;
            cin >> current;
            a.push(make_pair(current, i));
        }

        for (int i=0; i<n; i++) {
            int current;
            cin >> current;
            b.push(make_pair(current, i));
        }

        for (int i=0; i<n; i++) {
            int current;
            cin >> current;
            c.push(make_pair(current, i));
        }

        vector<pair<int, int>> topA(3);
        vector<pair<int, int>> topB(3);
        vector<pair<int, int>> topC(3);

        int mostFriends = 0;
        for (int i=0; i<3; i++) {
            topA[i] = a.top();
            a.pop();

            topB[i] = b.top();
            b.pop();

            topC[i] = c.top();
            c.pop();
        }

        for (int i=0; i<3; i++) {
            pair<int, int> currentA = topA[i];
            for (int j=0; j<3; j++) {
                pair<int, int> currentB = topB[j];
                if (currentA.second == currentB.second) continue;
                for (int k=0; k<3; k++) {
                    pair<int, int> currentC = topC[k];
                    if (currentB.second == currentC.second) continue;
                    if (currentA.second == currentC.second) continue;
                    mostFriends = max(mostFriends, currentA.first + currentB.first + currentC.first);
                }
            }
        }

        cout << mostFriends << "\n";
    }
}