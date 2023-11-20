#include <iostream>
#include <string>
#include <vector>

using namespace std;

void findLuckyNumbers(int n, string first, vector<int> &luckyNumbers) {
    if (n==0) return;
    luckyNumbers.push_back(stoi(first+'7'));
    findLuckyNumbers(n-1, first+'7', luckyNumbers);
    luckyNumbers.push_back(stoi(first+'4'));
    findLuckyNumbers(n-1, first+'4', luckyNumbers);
}

int main() {
    string n; 
    cin >> n;

    int num = stoi(n);

    vector<int> luckyNumbers;

    findLuckyNumbers(4, "", luckyNumbers);

    for (int i=0; i<luckyNumbers.size(); i++) {
        if (num % luckyNumbers[i] == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    
    return 0;
}