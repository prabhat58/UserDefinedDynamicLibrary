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

int reverse(struct link *temp)
{
if(temp==NULL)
  return 0;

reverse(temp->node);
 printf("\n%d",temp->item);
}

void sortedinsert(struct link *temp,int x)
{struct link *t,*t1;
 while(temp->item<x)
   { t1=temp;
     temp=temp->node;
   }
t=createnode();
insertelement(x,t);
t->node=t1->node;
t1->node=t;
}
void sorting(struct link *temp)
{struct link *t1,*t2;   
int x;
   t1=temp;
  while(t1!=NULL)
{t2=temp;
   while(t2->node!=NULL)
   { if(t2->node->item<t2->item)
      {x=t2->item;
       t2->item=t2->node->item;
       t2->node->item=x;
}      t2=t2->node;
   }
 t1=t1->node;
} 

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
while(temp!=NULL)
{
  printf("\n%d",temp->item);
  temp=temp->node;
}

printf("\nProcess of insertion");
do
{ 
printf("\n 1: First position\n 2: Last position\n 3: ith position from beginning\n 4: ith position from end\n 5: Deletion of node\n 6: Reverse linking\n 7:Printing in reverse\n SELECT YOUR OPTION:  ");
scanf("%d",&n);
switch(n)
{
case 1:
temp=createnode();
insertelement(100,temp);
temp->node=start;
 start=temp;
  prev=start;
 while(prev!=NULL)
      {
        printf("\n%d",prev->item);
        prev=prev->node;
      }
 break;
 case 2:
temp=createnode();
insertelement(100,temp); 
next->node=temp;

 prev=start;
 while(prev!=NULL)
      {
        printf("\n%d",prev->item);
        prev=prev->node;
      }
 break;
 case 3:

 printf("\nEnter the position where you want to enter the node");
 scanf("%d",&i);


   prev=start;
   
 for(j=1;j<i-1;j++)
  {
   if(prev==NULL)
   {
     printf("\nTHERE IS NO SUCH INDEX");
              break;
   } 
  prev=prev->node;
  temp1=prev->node;
}
temp=createnode();
insertelement(100,temp); 
  
prev->node=temp;
  temp->node=temp1;

prev=start;
 while(prev!=NULL)
      {
        
        printf("\n%d",prev->item);
        prev=prev->node;
      }
break;
case 4:

printf("\nEnter the position from the end where you want the node to appear: ");
scanf("%d",&i);
prev=start;
temp1=start;
for(j=1;j<i;j++)
{
  prev=prev->node;
}
while(prev->node!=NULL)
  {
  temp1=temp1->node;
  prev=prev->node;
  }
temp=createnode();
insertelement(100,temp); 

temp->node=temp1->node;
temp1->node=temp;
	

prev=start;
 while(prev!=NULL)
      {
        printf("\n%d",prev->item);
        prev=prev->node;
      }
           break;

case 5:

printf("enter the position from where you want to delete the node");
scanf("%d",&i);

prev=start;


for(j=1;j<i;j++)
{
 
 temp=prev;
 prev=prev->node;
 
}
free(prev);
temp->node=prev->node;


prev=start;
 while(prev!=NULL)
      {
        
        printf("\n%d",prev->item);
        prev=prev->node;
      }
 


break;

case 6:

t2=NULL;
t1=start;
t3=start->node;

while(t3!=NULL)
{
 t1->node=t2;
 t2=t1;
 t1=t3;
 t3=t3->node;
}
t1->node=t2;
prev=t1	;
while(prev!=NULL)
{
 printf("\n%d",prev->item);
 prev=prev->node;
}
break;
case 7:
x=reverse(start);
break;
}
printf("\nwanna continue");
scanf("%d",&ch);
}
while(ch!=0);
}



