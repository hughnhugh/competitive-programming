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
    void traverse(TreeNode* root, int& count, const int& k, int& kthSmallest) {
        if (root->left) {
            traverse(root->left, count, k, kthSmallest);
        }

        count++;
        if (k == count) {
            kthSmallest = root->val;
            return;
        } else if (k > count) return;

        if (root->right) {
            traverse(root->right, count, k, kthSmallest);
        }
    }

    int kthSmallest(TreeNode* root, int k) {
        if (!root) return 0;

        int count = 0;
        int kthSmallest = 0;
        traverse(root, count, k, kthSmallest);
        return kthSmallest;
    }
};