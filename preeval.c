#include <stdio.h>
#include <string.h>
int top= -1;
char s[20];

void push(char c)
{
if (top==19)
printf("stack is full");
else
{
top++;
s[top]=c;
}
}

char pop()
{
char popped;
if (top==-1)
printf("stack is empty");
else
{
popped=s[top];

top--;
printf("popped: %c top: %d\n",popped,top);
}
return popped;
}

int calc(char oper,int op2,int op1)
{
switch(oper)
{
   case '+':
	return (op1+op2);
	break;

   case '-':
	return (op1-op2);
	break;
   case '*':
	return (op1*op2);
	break;
   case '/':
	return (op1/op2);
	break;
   default:
	printf("invalid");
}
}

void main()
{
char x[20];
int n;
printf("enter prefix exp\n");
scanf("%s",x);
n=strlen(x);
while(n>0)
{
int i=0;
while(i<n)
i++;
i--;
 if (x[i]>=48 && x[i]<=56)
   {
	push(x[i]);
   }
  else
   {
	int i;
	char op2,op1;
	op2=pop();
	op2=op2-48;
	op1=pop();
	op1=op1-48;
	i=calc(x[i],op2,op1);
	push(i+48);
   }
n--;
}
printf("ans=%d",s[top]-48);
}


