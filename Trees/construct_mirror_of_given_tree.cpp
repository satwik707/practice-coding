void mirror(Node* node) 
{
     // Your Code Here
     if(node==NULL)
     {
         return;
     }
     
     Node* l=node->left;
     Node * r=node->right;
     node->left=r;
     node->right=l;
     mirror(node->left);
     mirror(node->right);
}
