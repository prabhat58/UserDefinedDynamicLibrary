#include<stdio.h>
#include"header.h"


void displaycq(struct cque *p)
{
    int i;
    if(p->f==-1)
        printf("EMPTY\n");
    else
    {
        for(i=p->f;i!=p->r;i++)
        {
            printf("%d\n",p->a[i]);
            if(i==p->max-1)
                i=-1;
        }
        printf("%d\n",p->a[i]);
    }

}

