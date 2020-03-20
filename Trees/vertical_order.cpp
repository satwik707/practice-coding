
void verticalOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<pair<Node*,int>>q;
    int hd=0;
    map<int,vector<int>>m;
    q.push(make_pair(root,hd));
    while(!q.empty())
    {
        Node * e=q.front().first;
       
        int v=q.front().second;
        m[v].push_back(e->data);
         q.pop();
        if(e->left)
        {
            q.push(make_pair(e->left,v-1));
        }
        if(e->right)
        {
            q.push(make_pair(e->right,v+1));
        }
    }
    map<int,vector<int>>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        for(int i=0;i<itr->second.size();i++)
        {
            cout<<itr->second[i]<<" ";
        }
    }
}
