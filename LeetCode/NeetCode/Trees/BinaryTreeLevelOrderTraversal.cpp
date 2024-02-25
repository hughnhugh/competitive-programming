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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;

        if (!root) return res;

        queue<pair<TreeNode*, int>> nodeQueue;
        nodeQueue.push(make_pair(root, 0));

        while (!nodeQueue.empty()) {
            pair<TreeNode*, int> current = nodeQueue.front();
            nodeQueue.pop();

            if (res.size() < current.second + 1) res.push_back({});
            res[current.second].push_back(current.first->val);
            if (current.first->left) nodeQueue.push(make_pair(current.first->left, current.second+1));
            if (current.first->right) nodeQueue.push(make_pair(current.first->right, current.second+1));
        }

        return res;
    }
};