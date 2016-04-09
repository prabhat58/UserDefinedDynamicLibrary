#include<stdio.h>
#include<stdlib.h>
#include"header.h"
struct link * deletes(struct link *start)
{
 struct link *temp=start;
 start=start->node;
 printf("DATA DELETED IS  %d\n",temp->item);
 free(temp);
 return(start);
}

