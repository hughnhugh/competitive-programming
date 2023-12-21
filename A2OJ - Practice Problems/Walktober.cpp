#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    string output [testCases]; 
    

    for (int i=0; i < testCases; i++) {
        int M, N, P;
        cin >> M >> N >> P;

        int steps[M][N];
        for (int j=0; j < M; j++) {
            for (int k=0; k < N; k++) {
                int step;
                cin >> step;

                steps[j][k] = step;
            }
        }

        int additionalSteps = 0;

        for (int j=0; j < N; j++) {
            int maxStepForDay = 0;
            for (int k=0; k < M; k++) {
                if (steps[k][j] > maxStepForDay) {
                    maxStepForDay = steps[k][j];
                }
            }
            additionalSteps += (maxStepForDay - steps[P][j]);
        }

        output[i] = "Case #" + to_string(i + 1) + ": " + to_string(additionalSteps);
    }

    for (int i = 0; i < testCases; i++) {
        cout << output[i] << endl;
    }

    return 0;
}