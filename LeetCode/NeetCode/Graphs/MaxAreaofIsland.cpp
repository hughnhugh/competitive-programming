#include <vector>
using namespace std;

class Solution {
private:
    void exploreIslandNodes(vector<vector<int>>& grid, int x, int y, int& area) {
        int m = grid.size();
        int n = grid[0].size();

        if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == 0) {
            return;
        }

        area++;

        // Mark the current cell as visited by setting it to '0'
        grid[x][y] = 0;

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        // Explore all four adjacent cells
        for (int i = 0; i < 4; i++) {
            int nextX = x + dx[i];
            int nextY = y + dy[i];
            exploreIslandNodes(grid, nextX, nextY, area);
        }
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;

        int m = grid.size();
        int n = grid[0].size();

        int maxArea = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // If a land cell is found, explore the entire island and increment the count
                if (grid[i][j] == 1) {
                    int area = 0;
                    exploreIslandNodes(grid, i, j, area);
                    maxArea = max(area, maxArea);
                }
            }
        }

        return maxArea;
    }
};