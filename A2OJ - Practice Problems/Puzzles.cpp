#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    
    cin >> n >> m;

    int puzzles[m];

    for (int i=0; i<m; i++) {
        cin >> puzzles[i];
    }

    sort(puzzles, puzzles + m);

    int right = n-1;

    int min = INT_MAX;

    while (right < m) {
        int diff = puzzles[right] - puzzles[right-n+1];
        if (diff < min) min = diff;
        right++;
    }

    cout << min;
    return 0;
}