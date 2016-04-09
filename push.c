#include<stdio.h>
#include"header.h"

void push(struct stack *t)
{
  if(t->top==6)
   printf("STACK FULL\n");
  else
  {
   t->top=t->top+1;
   printf("ENTER ITEM\n");
   scanf("%d",&(t->item[t->top]));
   printf("\nITEM PUSHED=%d\n",t->item[t->top]);
  }
}

