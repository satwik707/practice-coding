void printset(Node * node,set<int>&s)
{
     if(node==NULL)
   {
       return;
       
   }
   if(node->left && node->right==NULL)
   {
       //cout<<node->left->data<<" ";
       s.insert(node->left->data);
   }
   else if(node->right && node->left==NULL)
   {
       s.insert(node->right->data);
   }
   printset(node->left,s);
   printset(node->right,s);
   //static int flag=0;
   
}
