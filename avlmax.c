#include<stdio.h>
#include"header.h"

int max(struct treea *left,struct treea *right)
{
  int x,y;
  if(left==NULL)
    x=-1;
  else
    x=left->height;
  if(right==NULL)
    y=-1;
  else
    y=right->height;
  
  if(x>y)
    return(x+1);
  else
     return(y+1);
  
}

