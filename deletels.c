#include<stdio.h>
#include<stdlib.h>
#include"header.h"
struct link * deletel(struct link *start)
{
  struct link *temp;
  temp=start->node;
 while(temp->node!=NULL)
 {
   temp=temp->node;
    start=start->node;
 }
printf("DATA DELETED IS  %d\n",temp->item);
free(temp);
start->node=NULL;
return(start);
}

