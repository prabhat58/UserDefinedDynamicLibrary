#include<stdio.h>
#define max 10
struct deque
{
 int a[max];
 int f,r;
};
void insert(struct deque *p,int x)
{
  int i,n;
  if(p->f==0&&p->r==max-1)
    printf("\nQUEUE IS FULL");
  else
    { 
         printf("\nENTER NUMBER: ");
         scanf("%d",&n);
      if(x==0)
      {
        if(p->f==0)
        {
          for(i=p->r;i>=0;i--)
              p->a[i+1]=p->a[i];
          
              p->a[p->f]=n;
              (p->r)++;
        }
        else
        {
            if(p->f==-1)
              {
               p->a[++(p->f)]=n;
               (p->r)++;
              }
            else
              p->a[--(p->f)]=n;
        }
        printf("\nDATA INSERTED IS %d",p->a[p->f]);
      }
     if(x==1)
     {
       if(p->r==max-1)
       {
         for(i=(p->f);i<(p->r);i++)
          p->a[i-1]=p->a[i];
             
            p->a[p->r]=n;
       }
       else
       {
         p->a[++(p->r)]=n;
         if(p->f==-1)
         p->f++;
       }
       printf("\nDATA INSERTED IS %d",p->a[p->r]);
     }
   }    
}
void delete(struct deque *p,int x)
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
    printf("\nDATA DELETED IS %d",p->a[(p->f)++]);
    if(x==1) 
    printf("\nDATA DELETED IS %d",p->a[(p->r)--]);
  }
}
void display(struct deque *p)
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
int main()
{  
  struct deque s;
  s.f=-1;s.r=-1;
  int i=1;
  while(i==1)
  {
    printf("\nSELECT YOUR OPTION \n1-INSERT AT BEGINNING\n2-INSERT AT END\n3-DELETE FROM BEGINNING\n4-DELETE FROM END\n5-DISPLAY\n");
    scanf("%d",&i);
    switch(i)
    {
      case 1:
       insert(&s,0);
       break;
      case 2:
       insert(&s,1);
       break;
      case 3:
       delete(&s,0);
       break;
      case 4:
       delete(&s,1);
       break;
      case 5:
       display(&s); 
    }
   printf("\nWANT TO CONTINUE? PRESS 1\n");
   scanf("%d",&i);
  }
}
