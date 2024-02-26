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
    bool isValidSubtree(TreeNode* root, long long minValid, long long maxValid) {
        if (!root) return true;
        if (root->left && (root->left->val >= root->val || root->left->val <= minValid || root->left->val >= maxValid)) return false;
        if (root->right && (root->right->val <= root->val || root->right->val <= minValid || root->right->val >= maxValid)) return false;
        return isValidSubtree(root->left, minValid, min(maxValid,(long long)root->val)) && isValidSubtree(root->right, max(minValid, (long long)root->val), maxValid);
    }

    bool isValidBST(TreeNode* root) {
        if (!root) return true;

        return isValidSubtree(root, LONG_MIN, LONG_MAX);
    }
};