void makemirror(Node * a)
{
    if(a==NULL)
    {
        return;
    }
    
        Node *l=a->left;
    
   
        Node *r=a->right;
        a->left=r;
        a->right=l;
        makemirror(a->left);
        makemirror(a->right);
    
}
void inorder(Node * root,vector<int>&v1)
{
    if(root==NULL)
    {
        return; 
    }
    inorder(root->left,v1);
    v1.push_back(root->data);
    inorder(root->right,v1);
}
void inorder2(Node * root,vector<int>&v2)
{
    if(root==NULL)
    {
        return; 
    }
    inorder2(root->left,v2);
    v2.push_back(root->data);
    inorder2(root->right,v2);
}

int areMirror(Node* a, Node* b) {
    // Your code here
    
    makemirror( a);
    vector<int>v1;
    vector<int>v2;
    inorder(a,v1);
    inorder2(b,v2);
    if(v1==v2)
    {
        return 1;
    }
    return 0;
}
