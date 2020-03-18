int height(Node* node)
{
   // Your code here
   if(node==NULL)
   {
       return 0;
   }
   int lheight=height(node->left);
   int rheight=height(node->right);
   return max(lheight,rheight)+1;
}

