#include<stdio.h>
#include"header.h"
void display(struct link *start)
{
 int x=1;
 if(start==NULL)
    printf("LIST EMPTY\n");
 else
 {
 while(start!=NULL)
 {
   printf("DATA OF NODE %d IS %d \n",x,start->item);
   start=start->node;
   x++;
 }
}
}

