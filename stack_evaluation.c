#include<stdio.h>
int length,popped;
char a[100];
void push(int *temptop,char *x)
{
 
 {
 *temptop=*temptop+1;
 a[*temptop]=*x;
 
 }
}
void pop(int *temptop)
{

 if(*temptop==-1)
 printf("Stack is empty");
 else
 {
  popped=a[*temptop];
   *temptop--;
   
 }
} 

void main()
{
 int top,i;
 top=-1;
 char x[100],*p=&x[0];
 
 printf("Enter the expression: ");
 scanf("%s",x);
 
 printf("\nEvaluation\n");
 while(*p!='\0')
{
 if(*p=='['||*p=='{'||*p=='(')
 {
  push(&top,p);
 }
 else if(*p==']'||*p=='}'||*p==')')
 {
    if(top==-1)
   {
    printf("stack empty \n EXPRESSION IS INVALID");
   }
   
   else 
      {
         
        pop(&top);
      
        if(*p==']'&&popped=='[') 
       {
         /*break;*/ printf("alid");
       }
     
      /*  else
       p++;
      */
      }
 }
 else 
 p++;
}
if(top==-1)
printf("Expression is valid");

printf("Expression is invalid ");
}
