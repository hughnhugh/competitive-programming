#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    vector<string> digitLetters = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
public:
    void processCombination(const string& digits, const int& index, vector<char>& current, vector<string>& res) {
        if (index == digits.length()) {
            res.push_back(string(current.begin(), current.end()));
        } else {
            int currentNumber = digits[index] - '0';
            string letterOptions = digitLetters[currentNumber];
            for (int i=0; i<letterOptions.length(); i++) {
                current.push_back(letterOptions[i]);
                processCombination(digits, index+1, current, res);
                current.pop_back();
            }
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.size() == 0) return res;
        
        vector<char> current;
        processCombination(digits, 0, current, res);

        return res;
    }
};