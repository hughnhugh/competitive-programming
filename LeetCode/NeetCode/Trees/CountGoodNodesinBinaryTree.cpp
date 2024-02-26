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
    void addGoods(TreeNode* root, int maxValue, int& goodCount) {
        if (root->left) {
            if (root->left->val >= maxValue) {
                goodCount++;
            }
            addGoods(root->left, max(maxValue, root->left->val), goodCount);
        }

        if (root->right) {
            if (root->right->val >= maxValue) {
                goodCount++;
            }
            addGoods(root->right, max(maxValue, root->right->val), goodCount);
        }
    } 

    int goodNodes(TreeNode* root) {
        if (!root) return 0;

        int goodNodes = 1;
        addGoods(root, root->val, goodNodes);

        return goodNodes;
    }
};