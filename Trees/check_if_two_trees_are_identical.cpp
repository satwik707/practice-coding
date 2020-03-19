void inorder(Node* r1,vector<int>&v1)
{
    if(r1==NULL)
    {
        return;
    }
     inorder(r1->left,v1);
    v1.push_back(r1->data);
   
    inorder(r1->right,v1);
}
void inorder1(Node* r2,vector<int>&v2)
{
    if(r2==NULL)
    {
        return;
    }
     inorder1(r2->left,v2);
    v2.push_back(r2->data);
   
    inorder1(r2->right,v2);
}
bool isIdentical(Node *r1, Node *r2)
{
    //Your Code here
    vector<int>v1;
    inorder1(r1,v1);
    vector<int>v2;
    inorder(r2,v2);
    // for(int i=0;i<v1.size();i++)
    // {
    //     cout<<v1[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<v2.size();i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    int flag=0;
    if(v1==v2)
    {
        return true;
    }
    return false;
}
