#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        // Calculate the potential knight move positions
        int knightMoves[8][2] = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        int forkCount = 0;

        for (int i = 0; i < 8; i++) {
            int kingX = xk + knightMoves[i][0];
            int kingY = yk + knightMoves[i][1];

            // Check if the knight's potential move position overlaps with the queen's position
            for (int j=0; j<8; j++) {
                int queenX = xq + knightMoves[j][0];
                int queenY = yq + knightMoves[j][1];
                if (kingX == queenX && kingY == queenY) {
                    forkCount++;
                    break;
                }
            }
        }

        if (a == b) forkCount /= 2;

        cout << forkCount << endl;
    }
    
    return 0;
}