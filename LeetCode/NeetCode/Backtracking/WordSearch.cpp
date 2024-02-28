#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool dfs(const vector<vector<char>>& board, const string& word, int x, int y, int index, vector<vector<bool>>& visited) {
        // Base case: if we have checked all characters
        if (index == word.size()) return true;

        // Boundary check and visited check
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || visited[x][y] || board[x][y] != word[index]) {
            return false;
        }

        // Mark as visited
        visited[x][y] = true;

        // Direction vectors
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};

        // Explore all 4 directions
        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if (dfs(board, word, newX, newY, index + 1, visited)) {
                return true;
            }
        }

        // Backtrack
        visited[x][y] = false;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, 0, visited)) {
                    return true;
                }
            }
        }

        return false;
    }
};