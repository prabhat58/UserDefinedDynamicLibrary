#include<stdio.h>
#include"header.h"

void deletedq(struct deque *p,int x)
{
  if(p->f>(p->r)||p->r==-1)
  {
    printf("\nQUEUE EMPTY");
    if(p->r==-1)
     p->f=p->r=-1;
  }
  else
  {
    if(x==0)
     {
       printf("\nDATA DELETED IS %d",p->a[(p->f)++]);
     }
    if(x==1)
     { 
       printf("\nDATA DELETED IS %d",p->a[(p->r)--]);
     }
   }
}

