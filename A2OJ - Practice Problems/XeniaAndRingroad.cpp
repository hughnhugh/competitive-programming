#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    long long trips = 0;
    long long position = 1;

    for (int i=0; i<m; i++) {
        long long currentTask;
        cin >> currentTask;

        if (currentTask < position) trips++;
        position = currentTask;
    }

    cout << trips * n + position - 1;

    return 0;
}