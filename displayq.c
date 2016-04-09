#include<stdio.h>
#include"header.h"
void displayq(struct queue *p)
{
  int x;
 if(p->rear==-1)
   printf("QUEUE EMPTY\n");
 else
  {
    x=p->front;
     printf("YOUR QUEUE...\n");
    while(x<=p->rear)
      printf("%d\n",p->q[x++]);
  }
}

