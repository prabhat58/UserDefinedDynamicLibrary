#include<stdio.h>
#define max 10
struct cque
{
 int a[max];
 int f,r;
};
void delete(struct cque *p)
{
  if(p->r==-1)
    printf("QUEUE IS EMPTY\n");
  else
  {
      if(p->f==p->r)
      {
       printf("DATA DELETED : %d\n",p->a[(p->f)++]);
       p->f=p->r=-1;
      }
      else
      {
          printf("DATA DELETED : %d\n",p->a[(p->f)++]);
          if(p->r==max)
          p->r=0;
      }
  }
}
void insert(struct cque *p)
{
  int n;
 if((p->f==0&&p->r==max-1)||p->r==(p->f)-1)
  printf("\nQUEUE IS FULL!!\n");
 else
  {
    printf("\nENTER NUMBER\n");
    scanf("%d",&n);
    if(p->r==-1)
    {
      p->f=0;
      p->r=0;
      p->a[(p->r)]=n;
    }
    else
    {
     if(p->r==max-1)
     {
      p->r=0;
      p->a[(p->r)]=n;
     }
    else
      p->a[++(p->r)]=n;
    }
  }
}
void display(struct cque *p)
{
    int i;
    if(p->f==-1)
    printf("EMPTY\n");
    else
    {
        for(i=p->f;i!=p->r;i++)
        {
            printf("%d\n",p->a[i]);
            if(i==max-1)
               i=-1;
        }
        printf("%d\n",p->a[i]);
    }
}
int main()
{
  struct cque c;
  int x=1;
  c.f=c.r=-1;
  while(x==1)
 {
  printf("SELECT:\n1.INSERTION\n2.DELETION\n3.DISPLAY\n");
  scanf("%d",&x);
  switch(x)
  {
    case 1:
      insert(&c);
      break;
    case 2:
       delete(&c);
       break;
    case 3:
       display(&c);
  }
  printf("WANT TO CONTINUE??\nPRESS '1'\n");
  scanf("%d",&x);
 }
}
