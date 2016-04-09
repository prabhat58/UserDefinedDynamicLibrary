#include<stdio.h>
struct stack
{
  int top;
  int item[20];
};

void push(struct stack *t)
{
  if(t->top==19)
   printf("STACK IS FULL\n");
  else
  {
   t->top=t->top+1;
   printf("ENTER THE ITEM: \n");
   scanf("%d",&(t->item[t->top]));
   printf("\n THE PUSHED ITEM =%d\n",t->item[t->top]);
  }

}

void pop(struct stack *t)
{
 if(t->top==-1)
  printf("STACK IS EMPTY\n");
 else
  {
   printf("THE POPPED ITEM=%d\n",t->item[t->top]);
   t->top=t->top-1;
  }
}

void display(int top,struct stack *t)
{
  int i=1;
  if(top==-1)
  printf("STACK IS EMPTY\n");
 else
  {
   while(top>=0)
   {
     printf("THE ELEMENT %d IS\t%d\n",i+1,t->item[top--]);
     i++;
   }
  }
}

int main()
{
 struct stack s;
 s.top=-1;
 int i=1;
 while(i)
 {
 printf("ENTER YOUR CHOICE: \n1-PUSH\n2-POP\n3-DISPLAY\n");
 scanf("%d",&i);
 switch(i)
  {
    case 1:
     {
       push(&s);
        break;
     }
    case 2:
     {
       pop(&s);
       break;
     }
    case 3:
     {
       display(s.top,&s);
     }
  }
  printf("WANT TO CONTINUE(1/0)??");
  scanf("%d",&i);

 }
}
