//https://leetcode.com/problems/binary-tree-right-side-view/description/




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
         vector<int> rightView;
    if (!root) return rightView;

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size(); // Number of nodes at the current level
        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front();
            q.pop();

            // Add the last node at this level to the right view
            if (i == levelSize - 1) {
                rightView.push_back(node->val);
            }

            // Add child nodes for the next level
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }

    return rightView;
    }
};