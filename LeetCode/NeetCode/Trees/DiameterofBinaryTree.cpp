#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxHeight(TreeNode* root, int& res) {
        if (!root) return 0;

        int maxRight = maxHeight(root->right, res);
        int maxLeft = maxHeight(root->left, res);
        res = max(res, maxRight + maxLeft);
        return 1+max(maxRight, maxLeft);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        
        int res = 0;
        maxHeight(root, res);

        return res;
    }
};