#include<stdio.h>
#include"header.h"

int balancefactor(struct treea *temp)
{
 int x,y;
  if(temp->left==NULL)
    x=-1;
  else
    x=(temp->left)->height;
  if(temp->right==NULL)
    y=-1;
  else
    y=(temp->right)->height;
  return(x-y);
}


