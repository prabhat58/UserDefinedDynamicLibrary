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
  printf("\t%d",temp->item);
  temp=temp->node;
}
printf("\n");
}

void insertelement(int a,struct link *temp)
{
  temp->item=a;
  temp->node=NULL;
}

void main()
{
 int x,n,y,j,i,ch=1,a,count=0;
 y=1;
 
 struct link *start,*next,*prev,*temp,*temp1,*t1,*t2,*t3,*inserted,*pointer;
 printf("Start creating the nodes");

 start=createnode();
 printf("\nEnter the item: ");
 scanf("%d",&x);
 insertelement(x,start);

 prev=start;
 while(y!=0)
 {
 next=createnode();
 printf("\nEnter the item: ");
 scanf("%d",&x);
 insertelement(x,next);
 prev->node=next;
 prev=prev->node;
 printf("ENTER MORE??? ");
 scanf("%d",&y);
 }
temp=start;
display(temp);

// PALINDROME CHECK


temp=start;
i=1;
while(temp->node!=NULL)
{
 temp=temp->node;
 i++;
}
temp=start;

while(1)
{
 prev=start;
   for(j=1;j<i;j++)
     prev=prev->node;
  if(temp->item!=prev->item)
   break;
  if(temp->node==prev||temp==prev)
      break;

  temp=temp->node;
  i--;
}

if(temp==prev)
{
   printf("PALLINDROME\n");
}
else
{
  if(temp->item==prev->item)
     printf("PALLINDROME\n");
  else
     printf("NOT PALLINDROME\n");
}
}
