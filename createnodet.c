#include<stdio.h>
#include"header.h"
#include<stdlib.h>

struct tree *createnodet()
{
  struct tree *temp;
  temp=(struct tree *)malloc(sizeof(struct tree));
   temp->left=NULL;
   temp->right=NULL;
   return(temp);
}

