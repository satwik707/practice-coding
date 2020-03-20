int p(struct Node *root, int target)
{
     // Code here
     if(root==NULL)
     {
         return 0;
     }
     if(root->data==target)
     {
         return 1;
     }
     if(p(root->left,target)||p(root->right,target))
     {
         cout<<root->data<<" ";
         return 1;
     }
     return 0;
}
bool printAncestors(struct Node *root, int target)
{
    int a=p(root,target);
   // cout<<endl;
    return a;
}
