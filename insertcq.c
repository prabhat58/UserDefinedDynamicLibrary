#include<stdio.h>
#include"header.h"


void insertcq(struct cque *p)
{
  int n;
 if((p->f==0&&p->r==p->max-1)||p->r==(p->f)-1)
  printf("\nQUEUE FULL!!\n");
 else
  {
    printf("\nENTER NUMBER\n");
    scanf("%d",&n);
    if(p->r==-1)
    {
        p->f=0;p->r=0;
      p->a[(p->r)]=n;
    }
    else
    {
     if(p->r==p->max-1)
     {
      p->r=0;
      p->a[p->r]=n;
     }
    else
       p->a[++(p->r)]=n;
    }
  }
}

