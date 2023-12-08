#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int x = 0, y = 0, z = 0;
    int line_number;

    cin >> line_number;

    for (int i=0; i < line_number; i++) {
        int tx, ty, tz;
        cin >> tx >> ty >> tz;
        x += tx;
        y += ty;
        z += tz;
    }

    if (x == 0 and y==0 and z==0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
