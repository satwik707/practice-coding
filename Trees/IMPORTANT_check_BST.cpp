bool util(Node * root,int min,int max)
{
    if(root==NULL)
    {
        return 1;
    }
    if(root->data<min||root->data>max)
    {
        return 0;
        
    }
   return  util(root->left,min,root->data-1) &&  util(root->right,root->data+1,max);
   
    
}
bool isBST(Node* root) {
    int min=INT_MIN;
    int max=INT_MAX;
    if(util(root,min,max))
    {
        return 1;
    }
    return 0;
    
}
