#include <iostream>
#include <string>
using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    int spaces = 0;
    for (int i=0; i<line.length(); i++) {
      if (line[i] == ' ') {
        spaces++;
      }
    }

    int numList [spaces];
    int numCount = 0;

    string tempNumber = "";

    for (int i=0; i<line.length(); i++) {
        if (line[i] != ' ') {
            tempNumber += line[i];
            if (i == line.length()-1) {
                numList[numCount] = stoi(tempNumber);                
            }
        }
        else {
            if (tempNumber != "|") {
                numList[numCount] = stoi(tempNumber);
                numCount++;
            }
            tempNumber = "";
        }
    }

    for (int i=0; i<spaces/2; i++) {
        cout << numList[i] * numList[i+spaces/2];
        if (i != spaces/2-1) {
        cout << " "; 
        }
    }
    cout << endl; 

  }
}
