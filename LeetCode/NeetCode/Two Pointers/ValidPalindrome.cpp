#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string sanitisedString = "";
        for (int i=0; i<s.length(); ++i) {
            char current = s[i];
            if (isalpha(current)) {
                sanitisedString += tolower(current);
            } else if (isdigit(current)) {
                sanitisedString += current;
            }
        }

        int left = 0;
        int right = sanitisedString.length() - 1;

        while (left < right) {
            if (sanitisedString[left] != sanitisedString[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};