#include<stdio.h>
#include"header.h"

void insertdq(struct deque *p,int x)
{
  int i,n;
   
  if(p->f==0&&p->r==p->max-1)
    printf("\nQUEUE FULL");
  else
    { 
         printf("\nENTER NUMBER");
         scanf("%d",&n);
      if(x==0)
      {
        if(p->f==0)
        {
          for(i=p->r;i>=0;i--)
           p->a[i+1]=p->a[i];
          
           p->a[p->f]=n;p->r++;
        }
        else
        {
            if(p->f==-1)
              {p->a[++(p->f)]=n;
               (p->r)++;
              }
            else
             {
              p->a[--(p->f)]=n;
              }
        }
        printf("\nDATA INSERTED IS %d",p->a[p->f]);
      }
     if(x==1)
     {
       if(p->r==p->max-1)
       {
         for(i=(p->f);i<(p->r);i++)
          p->a[i-1]=p->a[i];
             
            p->a[p->r]=n;
       }
       else
        {p->a[++(p->r)]=n;if(p->f==-1)
                             p->f++;}
       printf("\nDATA INSERTED IS %d",p->a[p->r]);
     }  
    }    
}

