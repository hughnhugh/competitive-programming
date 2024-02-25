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
    bool generatePath(TreeNode* root, TreeNode* target, vector<TreeNode*>& path) {
        if (!root) return false;
        path.push_back(root); // Add current node to path
        
        if (root == target) return true; // Target found

        // Recur left or right if the target is found in either subtree
        if (generatePath(root->left, target, path) || generatePath(root->right, target, path)) {
            return true;
        }
        
        path.pop_back(); // Backtrack if target not found in subtree
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pPath;
        vector<TreeNode*> qPath;

        generatePath(root, p, pPath);
        generatePath(root, q, qPath);

        int smallestIndex = min(qPath.size(), pPath.size());
        
        for (int i=0; i<smallestIndex; i++) {
            if (pPath[i] != qPath[i]) return pPath[i-1];
        }

        return pPath[smallestIndex-1];
    }
};