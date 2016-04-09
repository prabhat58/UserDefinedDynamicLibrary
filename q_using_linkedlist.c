#include<stdio.h>
#include<stdlib.h>
struct s
{
int item;
struct s *link;
};
struct s *front,*rear,*temp;
struct s *push()
{
struct s *t2;
t2=(struct s*)malloc(sizeof(struct s));
printf("\nEnter item ");
scanf("%d",&t2->item);
t2->link=NULL;
return(t2);
}
struct s *pushnode_rear(struct s *r,struct s *t)
{
while(r->link!=NULL)
{
r=r->link;
}
r->link=t;
t->link=NULL;
}
struct s *popfront(struct s *f)
{ struct s *t;
if(f==NULL)
printf("\n queue is already empty \n");
if(f->link==NULL)
{
free(f);
printf("\n queue is now empty \n");
}
else
{t=f;
f=f->link;
free(t);
}
return f;
}
struct s *pushnode_front(struct s *f,struct s *temp)
{
temp->link=f;
f=temp;
}
struct s *poprear(struct s *r,struct s *temp)
{ 
if(r==NULL)
printf("\n queue is already empty \n");
else
{while(temp->link->link!=NULL)
  { 
   temp=temp->link;
  }
r=temp;
free(r->link);
r->link=NULL;
}
return r;
}
void display(struct s *temp)
{
if(temp==NULL)
printf("\n queue is empty \n");
else
{
while(temp!=NULL)
{ printf("%d\n",temp->item);
   temp=temp->link;
}
}
}
void main()
{
int ch,x=1,y;
struct s *temp;
while(x!=0)
{
printf("\n 1. INSERTION at rear \n 2. DELETION from front \n 3. INSERTION at front \n 4. DELETION from rear  \n 5. display \n SELECT YOUR OPTION ");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
 temp=push();
          if(front==NULL)
           {   
front=(struct s*)malloc(sizeof(struct s));
           front=temp;
            rear=temp;
           }       
 rear=pushnode_rear(rear,temp);     
break;
}

case 2:{
         front=popfront(front);
         break;
        }

case 3:
{temp=push();
          if(front==NULL)
            {   
front=(struct s*)malloc(sizeof(struct s));
           front=temp;
            rear=temp;
            }       
 front=pushnode_front(front,temp);     
break;
}

case 4:{
        temp=front;
        rear=poprear(rear,temp);
        break;
        }
case 5: { 
          display(front);
          break;
        }
default: exit(0);
}
printf("\n Want to perform more? (0/1)");
scanf("%d",&x);
}
}
