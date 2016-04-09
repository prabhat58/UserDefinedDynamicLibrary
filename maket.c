#include<stdio.h>
#include"header.h"

void maketree(struct tree *father,struct tree *child,int x,int count)
{
  child->data=x;
  if(count%2==0)
     father->left=child;
  else
     father->right=child;
}

