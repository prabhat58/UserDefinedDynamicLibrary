#include<stdio.h>
#include"header.h"

int print_inordera(struct treea *root)
{
  if(root==NULL)
    {
      return 0;
     }
  print_inorder(root->left);
  printf("%d\n",root->data);
  print_inorder(root->right);
}

