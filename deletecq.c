#include<stdio.h>
#include"header.h"


void deletecq(struct cque *p)
{
  if(p->r==-1)
  {
    printf("QUEUE EMPTY\n");
  }
  else
  {
      if(p->f==p->r)
      {
       printf("DATA DELETED IS %d",p->a[(p->f)++]);
      p->f=p->r=-1;
      }
      else
      {
          printf("DATA DELETED IS %d",p->a[(p->f)++]);
          if(p->r==p->max)
            p->r=0;
      }
  }
}

