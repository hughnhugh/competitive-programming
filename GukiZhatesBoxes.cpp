#include <iostream>

using namespace std;

int main() {
    int n, students;

    cin >> n >> students;

    int piles [n+1][2];

    for (int i=0; i < n; i++) {
        cin >> piles[i][0];
    }

    int seconds = 1;
    piles[0][1] = students;
    piles[n][0] = 0;
    piles[n][1] = 0;

    int currentPile = 0;
    

    for (int i=0; i < 50000; i++) {
        // Check if students > number in piles
        // If less or equal -> remove currentstudents of items from pile 
        // If greater then -> move students to next pile, keep some students to remove


        // Remove and increment seconds
        // 

        if (piles[currentPile][0] > piles[currentPile][1]) {
            piles[currentPile][0] -= piles[currentPile][1];
        }
        else if (piles[currentPile][0] == piles[currentPile][1]) {
            piles[currentPile][0] -= piles[currentPile][1];
            int leftoverStudents = piles[currentPile][1] - piles[currentPile][0];
            piles[currentPile+1][1] += leftoverStudents;
            currentPile++;
        }
        else {
            if (i == n-1) {
                cout << seconds;
                break;
            }
            int leftoverStudents = piles[currentPile][1] - piles[currentPile][0];
            piles[currentPile+1][1] += leftoverStudents;       
        }

        seconds++;        
    }

    // implement 0 cornercase






    return 0;
}