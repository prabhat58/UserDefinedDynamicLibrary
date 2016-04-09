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
temp=start;
count=0;

while(temp!=NULL)
{
 count++;
 temp=temp->node;
 
}


temp=start;
while(temp->node!=NULL)
{   
      next=temp;
 while(next->node!=NULL)
    {
        
      prev=next->node;
     if(temp->item==prev->item)
       {
         next->node=prev->node;
           free(prev);
       }
     
     else
     next=next->node;
    } 

        temp=temp->node;
        
}    


prev=start;
 while(prev!=NULL)
      {
        
        printf("\n%d",prev->item);
        prev=prev->node;
      }
}
