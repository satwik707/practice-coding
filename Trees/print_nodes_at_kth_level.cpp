void printKdistance(struct Node *root, int k)
{
  // Your code here
  if(root==NULL)
  {
      return;
  }
  queue<Node*>q;
  q.push(root);
  int level=0;
  if(level==k)
  {
      cout<<root->data;
      return;
  }
  while(!q.empty())
  {
      int len=q.size();
      for(int i=0;i<len;i++)
      {
          Node * e=q.front();
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
      level++;
      if(level==k)
      {
          while(!q.empty())
          {
              cout<<q.front()->data<<" ";
              q.pop();
          }
          return;
      }
  }
  return;
}
