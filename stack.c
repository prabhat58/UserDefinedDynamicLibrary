#include<stdio.h>
int a[100],poped_item;
int push(int item,int* temptop)
{
 if(*temptop==100)
   {
    printf("Stack is full");
      return *temptop;
   } 
 *temptop=*temptop+1;
 a[*temptop]=item;
 return *temptop;
}

int pop(int* temptop)
{
 if(*temptop==-1)
   {
    printf("\nStack is empty");
    return *temptop;
   }
 poped_item=a[*temptop];
 printf("\n%d",poped_item);
    *temptop--;
   return *temptop;
}

void display(int b[],int x)
{
 int i;
 for(i=0;i<x;i++)
    {
      printf("\n%d",b[i]);
      i++;
    }
}
 
void main()
{
 int top=-1;
 int m,x,j=0,ch=1;
 
while(ch!=0)
 {
 printf("SELECT: \n 1: insert the elements \n 2: pop the elements \n 3: display the elements \n");
 scanf("%d",&m);
 switch(m)
{
 case 1:
 j++;
 printf("\nEnter the item\n");
 scanf("%d",&x);
 push(x,&top);
 break;
 
 case 2:
 j--;
 pop(&top);
 break;

 case 3:
 display(a,j);
 break;
}
 printf("\nCONTINUE??");
 scanf("%d",&ch);
}

}
