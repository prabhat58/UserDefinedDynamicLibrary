#include<stdio.h>
#include<stdlib.h>
struct stack
{
  int item;
  struct stack *node;
};
struct stack *push(struct stack *top)
{
 struct stack *temp;
 temp=(struct stack *)malloc(sizeof(struct stack));
 printf("ENTER ITEM: \n");
 scanf("%d",&temp->item);
 if(top==NULL)
  {
    temp->node=NULL;
    top=temp;
   }
 else
  {
    temp->node=top;
    top=temp;
  }
 printf("PUSHED ITEM:  %d\n",top->item);
 return(top);
}
struct stack *pop(struct stack *top)
{
 struct stack *temp;
 if(top==NULL)
  printf("STACK IS EMPTY: \n");
 else
  {
   printf("ITEM POPPED:  %d\n",top->item);
   temp=top;
   top=top->node;
   free(temp);
   }
 return(top);
}
void display(struct stack *top)
{
 int i=1;
 if(top==NULL)
  printf("STACK IS EMPTY.\n");
 else
 {
  while(top!=NULL)
  {
   printf("THE ITEM %d IS: \t%d\n",i++,top->item);
   top=top->node;
  }
 }
}
int main()
{
 struct stack *top;
 top=NULL;
 int i=1;
 while(i)
 {
 printf("SELECT YOUR CHOICE: \n1.PUSH\n2.POP\n3.DISPLAY\n");
 scanf("%d",&i);
 switch(i)
  {
    case 1:
     {
       top=push(top);
        break;
     }
    case 2:
     {
       top=pop(top);
       break;
     }
    case 3:
     {
       display(top);
     }
  }
  printf("WANT TO CONTINUE(1/0)??");
  scanf("%d",&i);
  }
}
