#include<stdio.h>
#include"header.h"

void displaystack(int top,struct stack *t)
{
  
  if(top==-1)
  printf("STACK EMPTY\n");
 else
  {
   while(top>=0)
   {
     printf("\n",t->item[top--]);
     
   }
  }
}

