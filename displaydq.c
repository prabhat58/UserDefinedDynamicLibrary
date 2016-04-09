#include<stdio.h>
#include"header.h"

void displaydq(struct deque *p)
{
  int i;
  if(p->f>p->r||p->f==-1)
  {
    printf("\nQUEUE EMPTY");
    if(p->r==-1)
     p->f=p->r=-1;
  }
  else
  {
   printf("\nELEMENTS ARE...");
   for(i=p->f;i<=(p->r);i++)
     printf("\n%d",p->a[i]);
  }
}

