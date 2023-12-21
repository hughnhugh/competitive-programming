#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<pair<int, int>> cards;

    for (int i=1; i<=2*n; i++) {
        int a;
        cin >> a;

        cards.push_back(make_pair(a, i));
    }

    sort(cards.begin(), cards.end());

    for (int i=0; i<2*n; i+=2) {
        if (cards[i].first != cards[i+1].first){
            cout << -1;
            return 0;
        }
    }

    for (int i=0; i<2*n; i+=2) {
        cout << cards[i].second << " " << cards[i+1].second << "\n";
    }

    return 0;
}