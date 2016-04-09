#include<stdio.h>
#include"header.h"

struct treea * rotate_right(struct treea *temp)
{
  struct treea *temp1;
  temp1=temp->left;
  temp->left=temp1->right;
  temp1->right=temp;
  height(temp);
  height(temp1);
  return(temp1);
}

