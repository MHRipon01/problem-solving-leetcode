// https://www.naukri.com/code360/problems/code-find-a-node_5682?leftPanelTabValue=PROBLEM

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == x)
    {
        return true;
    }

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    if (l | r)
    {
        return true;
    }
    else
    {
        return false;
    }
}