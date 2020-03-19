void printSpiral(Node *root)
{
    //Your code here
    if(root==NULL)
    {
        return ;
    }
    deque<Node*>q;
    vector<int>v;
    queue<Node*>qq;
    q.push_back(root);
    qq.push(root);
    
    int flag=0;
    while(!qq.empty())
    {
        int len=qq.size();
        
        for(int i=0;i<len;i++)
        {
            Node * e=qq.front();
            qq.pop();
            if(e->left)
            {
                q.push_back(e->left);
                qq.push(e->left);
            }
            if(e->right)
            {
                q.push_back(e->right);
                qq.push(e->right);
            }
        }
        if(flag==0)
        {
            while(!q.empty())
            {
                v.push_back(q.front()->data);
                q.pop_front();
            }
            flag=1;
        }
        else if(flag==1)
        {
             while(!q.empty())
            {
                v.push_back(q.back()->data);
                q.pop_back();
            }
            flag=0;
        }
        
        
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
