#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    deque<pair<int, int>> line;

    for (int i=1; i<=n; i++) {
        int candles;
        cin >> candles;

        line.push_back(make_pair(i, candles));
    }

    while (line.size() > 1) {

        int candles = line.front().second;
        int index = line.front().first;
        line.pop_front();

        candles -= m;

        if (candles > 0) line.push_back(make_pair(index, candles));
    }

    cout << line.front().first;

    return 0;
}