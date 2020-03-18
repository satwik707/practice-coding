int maxNodeLevel(Node *root)
{
 // Add your code here
 queue<Node*>q;
 q.push(root);
 int max=INT_MIN;
 int mlevel=0;
 int level=0;
 while(!q.empty())
 {
        int len=q.size();
        if(max<len)
        {
            max=len;
            mlevel=level;
        }
        for(int i=0;i<len;i++)
        {
            Node * e=q.front();
            q.pop();
            if(e->left)
            {
                q.push(e->left) ;  
            }
            if(e->right)
            {
                q.push(e->right);
            }
        }
        level++;
 }
 return mlevel;
}
