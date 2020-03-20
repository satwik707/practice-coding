int Sumtree(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int d=root->data;
    int left=Sumtree(root->left);
    int right=Sumtree(root->right);
    return root->data+left+right;
    
}
bool isSumTree(Node* root)
{
     // Your code here
     if(root==NULL)
     {
         return true;
     }
     if(!root->left && !root->right)
     {
         return true;
     }
     int left=Sumtree(root->left);
     int right=Sumtree(root->right);
     if(root->data==left+right)
     {
         return true;
     }
     return false;
     
}
