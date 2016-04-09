#include<stdio.h>
#include"header.h"

int print_postorder(struct tree *root)
{
  if(root==NULL)
    {
      return 0;
     }
  print_inorder(root->left);
  print_inorder(root->right);
  printf("%d\n",root->data);
}

