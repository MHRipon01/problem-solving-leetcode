//https://leetcode.com/problems/minimum-depth-of-binary-tree/description/
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ml=minDepth(root->left);
        int mr=minDepth(root->right);
        if(ml==0)
            return mr+1;
        if(mr==0)
            return ml+1;
        return min(ml,mr) +1;
    }
};