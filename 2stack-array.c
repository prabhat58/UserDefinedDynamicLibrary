#include<stdio.h>
int a[7],top1=-1,top2=3;
void push()
{
if(top1==3&&top2==6)
  printf("\nboth the stacks are full");
else
  { int y,x,z=1;
    printf("\n enter the value to be added  =  ");
    scanf("%d",&y);
while(z!=0)
{printf("\n enter the stack to which you want to add  data ");
    scanf("%d",&x);
switch(x)
{case 1:if(top1<4)
    {printf("\n element added ");
     top1+=1;
     a[top1]=y;z=0;}
    else
    printf("\n this stack is already full..try from another ");
printf("%d",top2);
    break;
case 2:if(top2<7)
    {printf("\n element added ");
top2+1;
    a[top2]=y;z=0;}
    else
    printf("\n this stack is already full..try from another ");
    break;
  }
}
}
};
void pop()
{int x=1,y;
 if(top1==-1&&top2==3)
    printf("\n both the stacks are already empty ");
 else
  { while(x!=0)
{printf("\n enter the stack from which you want to remove  ");
    scanf("%d",&y);
switch(y)
{case 1:if(top1!=-1)
    {printf("\n element removed ");
    top1-=1;x=0;}
    else
    printf("\n this stack is already empty..try from another ");
    break;
case 2:if(top2!=3)
    {printf("\n element removed ");
    top2-=1;x=0;}
    else
    printf("\n this stack is already empty..try from another ");
    break;
  }
}
}
};
void display()
{ int y;
 if(top1==-1&&top2==3)
printf("\n no element present  ");
else
{printf("\n stack 1 \n  ");
for(y=top1;y>=0;y--)
printf("%d \n",a[y]);
printf("\n stack 2 \n  ");
for(y=top2;y>3;y--)
printf("%d \n",a[y]);
}
}




void main()
{
int x,y=1;
while(y==1)
{
printf("\n 1. add value to the stack(PUSH). \n 2.remove value from stack(POP). \n 3. Display stack. \n Enter the operation  ");
scanf("%d",&x);
switch(x)
{
case 1: {push();
        break;}
case 2: { pop();
           break;}
case 3: {display();
        break;}
}
printf("\n want to perform more?(0/1)  ");
scanf("%d",&y);
}
}
