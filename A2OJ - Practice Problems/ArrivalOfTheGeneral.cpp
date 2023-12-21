#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int number;
    cin >> number; 
    int heights [number];

    for (int i=0; i < number; i++) {
        cin >> heights[i];     
    }
 
    int min = 101;
    int max = 0;
    int maxPos = -1;
    int minPos = -1;


    for (int j=0; j < number; j++) {
        if (heights[j] > max) {
            max = heights[j];
            maxPos = j;
        }
        if (heights[j] <= min) {
            min = heights[j];
            minPos = j;
        }
    }

    if (maxPos > minPos) {
        maxPos -= 1;
    }

    cout << maxPos + (number - 1 - minPos);

    return 0;
}
