int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    return max(lheight,rheight)+1;
}
/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node) {
    // Your code here

    if(node==NULL)
    {
        return 0;
    }
    int lheight=height(node->left);
    int rheight=height(node->right);
    int dl=diameter(node->left);
    int dr=diameter(node->right);
    return max(lheight+rheight+1,max(dl,dr));
    
}
