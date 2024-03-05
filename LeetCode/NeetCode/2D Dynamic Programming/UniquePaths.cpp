#include <vector>
#include <unordered_map>

class Solution {
public:
    int calculateWays(const int& m, const int& n, const int& columns, std::unordered_map<int, int>& memo) {
        if (m < 0 || n < 0) return 0;
        if (m == 0 && n == 0) return 1;

        if (memo.find((m+1)*columns+n) == memo.end()) {
            memo[(m+1)*columns+n] = calculateWays(m-1, n, columns, memo) + calculateWays(m, n-1, columns, memo);
        }

        return memo[(m+1)*columns+n];
    }

    int uniquePaths(int m, int n) {
        std::unordered_map<int, int> memo;
        return calculateWays(m-1, n-1, n, memo);
    }
};