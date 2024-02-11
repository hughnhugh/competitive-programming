#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, bottom = m - 1;

        // Binary search to find the correct row
        while (top <= bottom) {
            int mid = top + (bottom - top) / 2;
            if (matrix[mid][0] == target) return true;
            else if (matrix[mid][0] < target) top = mid + 1;
            else bottom = mid - 1;
        }

        // If target is smaller than the smallest element or after finding the row, 
        // the top index will be greater than bottom, and we adjust the row to search in.
        int row = bottom;
        if (row < 0) return false; // target is smaller than the smallest element in the matrix

        // Binary search within the found row
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[row][mid] == target) return true;
            else if (matrix[row][mid] < target) left = mid + 1;
            else right = mid - 1;
        }

        return false;
    }
};