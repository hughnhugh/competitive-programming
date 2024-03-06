#include <string>

class Solution {
public:
    int minimumLength(std::string s) {
        if (s.length() == 0) return 0;

        int left = 0;
        int right = s.length()-1;

        while (left < right) {
            if (s[left] != s[right]) break;

            do {
                left++;
            } while (s[left] == s[left-1]);
            
            do {
                right--;
            } while (left < right && s[right] == s[right+1]);
        }

        return std::max(0, right-left+1);
    }
};