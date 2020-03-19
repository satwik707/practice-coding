void reversePrint(Node *root)
{
    //Your code here
    if(root==NULL)
    {
        return ;
    }
    deque<Node *>q;
    deque<Node*>qq;
    vector<int>v;
    q.push_back(root);
    v.insert(v.begin(),root->data);
    while(!q.empty())
    {
        int len=q.size();
        
        for(int i=0;i<len;i++)
        {
            Node *e=q.front();
            q.pop_front();
            if(e->left)
            {
                qq.push_back(e->left);
                q.push_back(e->left);
            }
            if(e->right)
            {
                qq.push_back(e->right);
                q.push_back(e->right);
            }
        }
        while(!qq.empty())
        {
            v.insert(v.begin(),qq.back()->data);
            qq.pop_back();
            
        }
        
        
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
