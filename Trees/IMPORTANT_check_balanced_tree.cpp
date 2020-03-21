int f(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=f(root->left);
    int r=f(root->right);
    return max(l,r)+1;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL)
    {
        return true;
    }
    int l=f(root->left);
    int r=f(root->right);
    if(abs(l-r)>1)
    {
        return false;
    }
    
    return isBalanced(root->left) && isBalanced(root->right);
}
