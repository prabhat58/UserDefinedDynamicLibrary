#include<stdio.h>
 int a[5];
void insertion(int *p, int *q, int x)
{
 if(*p==0 && *q==4)
   printf("Queue full");
 
 else 
 {
  a[*++p]=x;
  q++;
 }
}

void deletion(int *p)
{
 if(*p==-1)
 printf("Queue empty");

 else
 *p++;  
}
 
void main()
{
 int item,front=-1,rear=-1,n,ch=1;


while(ch!=0)
{
printf(" 1.insertion \n 2.deletion \n Enter your option \n");
scanf("%d",&n);

switch(n)

{

case 1:
printf("Enter the item: ");
scanf("%d",&item);
insertion(&front,&rear,item);
break;

case 2:
deletion(&front);
break;

}
printf("\n CONTINUE?? \n");
scanf("%d",&ch);
}
}


 
