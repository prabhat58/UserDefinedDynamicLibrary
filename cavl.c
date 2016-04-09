#include<stdio.h>
#include<stdlib.h>
#include"header.h"

struct treea *createnodeavl()
{
  struct treea *temp;
  temp=(struct treea *)malloc(sizeof(struct treea));
   temp->left=NULL;
   temp->right=NULL;
   temp->height=0;

   return(temp);
}

