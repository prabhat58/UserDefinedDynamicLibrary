#include<stdio.h>
#include<stdlib.h>
struct link
{
 struct link* node;
};

struct link* create_node() 
{
 struct link *a;
 a=(struct link*)malloc(sizeof(struct link));
 a->node=NULL;
 return a;
}

void main()
{
 int z,n,i=1,k,count=0;
 struct link *t1,*t2,*x,*a,*next,*start;
 printf("enter the no. of nodes uhh want:??\n");
 scanf("%d",&n);
 start=create_node();
 t1=start;
 
 while(i!=n)
{
 t2=create_node();
 t1->node=t2;
 t1=t2;
 i++;
}

t2=start;
while(t2->node!=NULL)
{
 t2=t2->node;
}
t1=start;
for(i=0;i<4;i++)
{
 t1=t1->node;
}
 t2->node=t1;

printf("Enter the grp into which uhh want to subdivide??\n");
scanf("%d",&k);


t1=start;
t2=t1;
while(t1!=t2)
{
 t1=t1->node;
 t2=t2->node->node;
}

t2=start;
while(t1->node!=t2->node)
{
 t1=t1->node;
 t2=t2->node;
}

a=t2;

t1=start;
t2=t1;
x=t1;

z=n/k;
while(1)
{
 if(n>=z)
{
 for(i=1;i<=z;i++)
{
 t1=t1->node;
 t2=t1->node;
}
 n=n-z;
 t1->node=x;
 t1=t2;
 x=t1;
 count++;
 printf(" %d",count);
}

else
{
 while(t1!=a)
{
 t1=t1->node;
} 
 t1->node=x;
 count++;
 printf("%d",count);
break;
}
}
}


 
 
 
