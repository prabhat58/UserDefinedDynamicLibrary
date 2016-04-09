#include<stdio.h>
#include"header.h"


struct tree * maketreebst(struct tree *root,int x)
{
  struct tree *temp;
  temp=createnodet();
  temp->data=x;
  if(root==NULL)
  {
    return(temp);
  }
  else
  {
    while(1)
    {
      if(x>root->data)
      {
         if(root->right==NULL)
           break;
         else
           root=root->right;
      }
      else
      {
         if(root->left==NULL)
           break;
         else
           root=root->left;
      }
    }
    if(x<root->data)
      root->left=temp;
    else
      root->right=temp;
   }
}

