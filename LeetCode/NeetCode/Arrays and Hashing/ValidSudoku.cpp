#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i<9; ++i) {
            set<char> chars;
            for (int j=0; j<9; ++j) {
                char c = board[i][j];
                if (c != '.') {
                    if (chars.count(c) == 1) return false;
                    chars.insert(c);
                }
            }
        }

        for (int i=0; i<9; ++i) {
            set<char> chars;
            for (int j=0; j<9; ++j) {
                char c = board[j][i];
                if (c != '.') {
                    if (chars.count(c) == 1) return false;
                    chars.insert(c);
                }
            }
        }

        for (int i=0; i<9; i+=3) {
            for (int j=0; j<9; j+=3) {
                set<char> chars;
                for (int k=0; k<3; k++) {
                    for (int l=0; l<3; l++) {
                        char c = board[i+k][j+l];
                        if (c != '.') {
                            if (chars.count(c) == 1) return false;
                            chars.insert(c);
                        }
                    }
                }
            }
        }

        return true;
    }
};