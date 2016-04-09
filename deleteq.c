#include<stdio.h>
#include"header.h"
void delete(struct queue *p)
{
  if(p->front==-1)
    printf("QUEUE EMPTY\n");
  else
   {
     printf("ITEM DELETED=%d\n",p->q[(p->front)++]);
     if(p->front>p->rear)
       p->front=p->rear=-1;
   }
}

