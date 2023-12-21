#include <iostream>

using namespace std;

int main() {
    int t, sx, sy, ex, ey;
    string wind;

    cin >> t >> sx >> sy >> ex >> ey >> wind;

    int elapsed = 0;
    int ydist = ey - sy;
    int xdist = ex - sx;
    int index = 0;
    while (elapsed < t) {
        char direction = wind[index++];
        if (index >= wind.length()) index = 0;

        if (xdist < 0 && direction == 'W') xdist++;
        else if (xdist > 0 && direction == 'E') xdist--;
        else if (ydist < 0 && direction == 'S') ydist++;
        else if (ydist > 0 && direction == 'N') ydist--;
        
        elapsed++;
        if (ydist == 0 and xdist == 0) {
            cout << elapsed;
            return 0;
        }
    }

    cout << -1;
    return 0;
}