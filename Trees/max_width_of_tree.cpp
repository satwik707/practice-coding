int getMaxWidth(Node* root)
{
    
   // Your code here
   if(root==NULL)
   {
       return 0;
   }
   queue<Node*>q;
   q.push(root);
   int max=0;
   while(!q.empty())
   {
       //int mn=0;
       int len=q.size();
       for(int i=0;i<len;i++)
       {
           Node* e=q.front();
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
      // cout<<q.size()<<" "<<max<<endl;
       if(q.size()>max)
       {
           max=q.size();
       }
   }
   return max;
}
