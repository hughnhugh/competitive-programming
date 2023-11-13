#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
 
using namespace std;
 
int main() {
    string input;
    string goodletters;
    int k;
 
    cin >> input >> goodletters >> k;
 
    set<char> letters;
 
    for (int i=0; i < goodletters.length(); i++) {
        if (goodletters[i] == '1') {
            letters.insert((char) (97 + i));
        } 
    }
 
    int count = 0;
    int badCount = 0;
    string substring = "";
 
    vector<string> list;
 
    for (int i=0; i<input.length(); i++) {
        for (int j=i; j<input.length(); j++) {
            substring += input[j];
            auto it = letters.find(input[j]);
            if (it == letters.end()) {
                badCount++;
            }
            if (badCount > k) {
                break;
            }
            if (find(list.begin(), list.end(), substring) == list.end()) {
                list.push_back(substring);
            }                          
            
        }
        substring = "";
        badCount = 0;
    }
 
    cout << list.size();
 
    return 0;
}
 