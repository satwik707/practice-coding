int maxLevelSum(Node* root) {
    // Your code here
    if(root==NULL)
    {
        return 0;
    }
    queue<Node*>q;
    q.push(root);
    int max=root->data;
    int sum=0;
    while(!q.empty())
    {
    int len=q.size();
   // cout<<"len"<<len<<endl;
    
     sum=0;
    for(int i=0;i<len;i++)
    {
       
        
        Node * e=q.front();
        sum+=e->data;
        
        q.pop();
        if(e->left)
        {
            q.push(e->left);
            
        }
        if(e->right)
        {
            q.push(e->right);
        }
        
    }
    //return max;
     max=max<sum?sum:max;
    }
    return max;
}
