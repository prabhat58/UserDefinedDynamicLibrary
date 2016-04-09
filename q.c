#include<stdio.h>
#include"header.h"

void queue()
{
 struct queue o;
 int x=1;
 o.front=-1;o.rear=-1;o.max=6;
 while(x==1)
 {
  printf("ENTER YOUR CHOICE-\n1-INSERTION\n2-DELETION\n3-DISPLAY\n");
  scanf("%d",&x);
  switch(x)
  {
    case 1:
      insert(&o);
      break;
    case 2:
       delete(&o);
       break;
    case 3:
       displayq(&o);
  }
  printf("WANT TO CONTINUE??\nPRESS '1'\n");
  scanf("%d",&x);
 }

}

