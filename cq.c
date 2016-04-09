#include<stdio.h>
#include"header.h"
void circular_queue()
{
  struct cque c;int x=1;
  c.f=c.r=-1;c.max=6;
  while(x==1)
 {
  printf("ENTER YOUR CHOICE-\n1-INSERTION\n2-DELETION\n3-DISPLAY\n");
  scanf("%d",&x);
  switch(x)
  {
    case 1:
      insertcq(&c);
      break;
    case 2:
       deletecq(&c);
       break;
    case 3:
       displaycq(&c);
  }
  printf("WANT TO CONTINUE??\nPRESS '1'\n");
  scanf("%d",&x);
 }
 
}

