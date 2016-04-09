#include<stdio.h>
#include"header.h"

int print_preorder(struct tree *root)
{
  if(root==NULL)
    {
      return 0;
     }
  printf("%d\n",root->data);
  print_inorder(root->left);
  print_inorder(root->right);
}

