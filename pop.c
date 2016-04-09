#include<stdio.h>
#include"header.h"

void pop(struct stack *t)
{
 if(t->top==-1)
  printf("STACK EMPTY\n");
 else
  {
   printf("ITEM POPPED=%d\n",t->item[t->top]);
   t->top=t->top-1;
  }
}

