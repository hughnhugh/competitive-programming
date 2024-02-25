#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> x(n);

        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        for (int i=0; i<n; i++) {
            cin >> x[i];
        }

        map<int, pair<int, int>> monsters;

        for (int i=0; i<n; i++) {
            if (monsters.count(abs(x[i])) == 0) {
                monsters[abs(x[i])] = make_pair(0, 0);
            } 
            
            monsters[abs(x[i])].second++;
            monsters[abs(x[i])].first += a[i];
        }

        int time = 0;

        int killed = 0;

        bool dead = false;

        while (killed < n) {

            int bulletsRemaining = k;

            while (bulletsRemaining > 0) {
                auto closestRight = monsters.begin();
                if (closestRight == monsters.end()) break;
                int nextMonsterHealth = closestRight->second.first;
                if (nextMonsterHealth > bulletsRemaining) {
                    closestRight->second.first -= bulletsRemaining;
                    bulletsRemaining = 0;
                } else if (nextMonsterHealth < bulletsRemaining) {
                    bulletsRemaining -= nextMonsterHealth;
                    killed += closestRight->second.second;
                    monsters.erase(closestRight);
                } else {
                    bulletsRemaining = 0;
                    killed += closestRight->second.second;
                    monsters.erase(closestRight);
                }
            }

            auto closestRight = monsters.begin();
            if (closestRight == monsters.end()) break;

            time++;

            if (time >= closestRight->first) {
                dead = true;
                break;
            }
        }

        if (dead) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}