#include<stdio.h>
#include"header.h"
void stack()
{
 struct stack s;
 s.top=-1;
 int i=1;
 while(i)
 {
 printf("CHOOSE YOUR CHOICE.....\n1-PUSH\n2-POP\n3-DISPLAY\n");
 scanf("%d",&i);
 switch(i)
  {
    case 1:
     {
       push(&s);
        break;
     }
    case 2:
     {
       pop(&s);
       break;
     }
    case 3:
     {
       displaystack(s.top,&s);
     }
  }
  printf("WANT TO CONTINUE(1/0)??");
  scanf("%d",&i);
 }

}
