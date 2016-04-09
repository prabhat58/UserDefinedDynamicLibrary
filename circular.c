#include<stdio.h>
#include<stdlib.h>

struct link
{
 int item;
 struct link *node;
};

struct link * createnode()
{
 struct link *temp;
 temp=(struct link *)malloc(sizeof (struct link));
 return temp;
}
void display(struct link *temp)
{
while(temp!=NULL)
{
  printf("\n%d",temp->item);
  temp=temp->node;
}
}
void insertelement(int a,struct link *temp)
{
  temp->item=a;
  temp->node=NULL;
}

void main()
{
 int x,n,y,j,i,ch=1,a,count=1;
 y=1;
 
 struct link *start,*next,*prev,*temp,*temp1,*t1,*t2,*t3;
 printf("Start creating the nodes");

 start=createnode();
 printf("\nEnter the item: ");
 scanf("%d",&x);
 insertelement(x,start);
 prev=start;
 while(y!=0)
 {
 count++;
 next=createnode();
 printf("\nEnter the item: ");
 scanf("%d",&x);
 insertelement(x,next);
 prev->node=next;
 prev=prev->node;
 printf("ENTER MORE??? ");
 scanf(" %d",&y);
 }
prev=start;
for(i=0;i<3;i++)
prev=prev->node;

next->node=prev;

temp=start;
prev=start;

while(1)
{
 temp=temp->node;
prev=prev->node->node;

if(temp==prev)
{
 printf("\n The given linked list is circular \n");
 break;
}
}

temp=start;
while(1)
{

temp=temp->node;
prev=prev->node;

if(temp==prev)
{
 printf(" \n The starting point is: %d\n",temp->item);
  break;
}
}
}


