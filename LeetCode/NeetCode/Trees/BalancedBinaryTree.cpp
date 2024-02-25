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
    int checkBalance(TreeNode* node, bool& res) {
        if (!node) return 0;
        int leftHeight = checkBalance(node->left, res);
        int rightHeight = checkBalance(node->right, res);

        if (abs(leftHeight - rightHeight) > 1) res = false;

        return 1+max(leftHeight, rightHeight);
    }

    bool isBalanced(TreeNode* root) {
        if (!root) return true;

        bool res = true;
        checkBalance(root, res);

        return res;
    }
};