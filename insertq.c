#include<stdio.h>
#include"header.h"
void insert(struct queue *p)
{
 if(p->rear==p->max)
   printf("QUEUE FULL\n");
 else
  {
    printf("ENTER THE ITEM\n");
     ++(p->rear);
     scanf("%d",&p->q[p->rear]);
    printf("ITEM INSERTED=%d\n",p->q[p->rear]);
    if(p->front==-1)
      ++(p->front);
  }
} 

