#include<stdio.h>
#include"header.h"

struct treea * rotate_left(struct treea *temp)
{
  struct treea *temp1;
  temp1=temp->right;
  temp->right=temp1->left;
  temp1->left=temp;
  height(temp);
  height(temp1);
  	
   return(temp1);
}

