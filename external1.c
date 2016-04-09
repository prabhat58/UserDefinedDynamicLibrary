#include<stdio.h>
#include<stdlib.h>

 int x,count=0;
 static int a=0,c=0,n;
struct link
{
 int item;
 struct link *node;
};

struct link *createnode()
{
 struct link *temp;
 temp=(struct link *)malloc(sizeof (struct link));
 count++;
 return temp;
}

void insertelement(int a,struct link *temp)
{
  temp->item=a;
  temp->node=NULL;
}



struct link * reverse(struct link *temp)

{
 c++;
 

    {
      if(temp==NULL)
      return 0;

      else
      {
       if((c%n+1)!=0)
         {
          
          reverse(temp->node);
          printf("%d\t",temp->item);
         }
      }
    }
   printf("\n");
temp=temp->node;
return temp;

}

void print(struct link* temp)
{
  while(temp!=NULL)
  {
   printf(" %d ",temp->item);
   temp=temp->node;
  }
  printf("\n");
}

int main()
{
 int x;
 int p=1;
 
 struct link *st,*next,*prev,*temp,*t1,*t2,*t3,*s;
 printf("Start creating the nodes");

 st=createnode();
 printf("\nEnter the item: ");
 scanf("%d",&x);
 insertelement(x,st);

 prev=st;
 while(p!=0)
 {
 next=createnode();
 printf("\nEnter the item: ");
 scanf("%d",&x);
 insertelement(x,next);
 prev->node=next;
 prev=prev->node;
 printf("ENTER MORE(1/0)??? ");
 scanf("%d",&p);
 }
temp=st;


print(st);

int i;
x=count;
struct link*z;

printf("\n Enter the desired size of group,\n according to which you want to reverse link\n"); 
scanf("%d",&n);

a=count%n;
count=count-a;

 printf("\nThe reverse order of the linked list would be given as\n");
 
/*
while(count!=0)
{
    z= reverse(temp);
    count=count-n;
}

    reverse(z);
*/

t2=NULL;
t1=st;
t3=st->node;

while(count!=0)
{
for(i=0;i<n;i++)
  {
  t3=t3->node;
  }
s=t3;

t2=NULL;
t1=st;
t3=st->node;
while(t3!=s)
{
 t1->node=t2;
 t2=t1;
 t1=t3;
 t3=t3->node;
}
count=count-n;
}

/*while(t3!=NULL)
{
 t1->node=t2;
 t2=t1;
 t1=t3;
 t3=t3->node;
}
*/
t1->node=t2;
prev=t1	;
print(prev);    
   
 




return 0;
}
