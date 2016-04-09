#include<stdio.h>
#include"header.h"

void height(struct treea *root)
{
  
  root->height=max(root->left,root->right);
   
}

