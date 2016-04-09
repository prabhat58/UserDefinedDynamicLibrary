#include<stdio.h>
#include<string.h>
int top=-1;
char a[50];
void push(char x)
{ 
if(top==49)
  printf("stack is full");
  top=top+1;
  a[top]=x;
}  
char pop()
{ 
  char x;
  if(top==-1)
     {
       printf("stack is empty");
     }
  x=a[top];  
  top=top-1;
  return x;
}
  
int precedence(int ch);

void convert(char *inf,int n);

main()
{
int n;
char inf[50];
printf("enter the expression");
scanf("%s",inf);
n=strlen(inf);
convert(&inf[n-1],n-1);
}

int precedence(int ch)
{	int pr;
    switch(ch)
	{
	 case '+':
 	 case '-':pr=2;
          break;
 	 case '*':pr=3;
  	  break;
 	 case '/':pr=3;
          break;
 	 case '^':pr=4;
          break;
 	 default :
                  pr =-1;
                  break;
	}
return pr;
}

void convert(char *inf,int n)
{
int p=1,i=n;
char c,pre[50];

while(n>=0)
{
  
   if(*inf=='+'||*inf=='-'||*inf=='*'||*inf=='/'||*inf=='^')
  {  
    if(precedence(*inf)>=p)
       push(*inf);
    else
     {
       while(precedence(c=pop())>precedence(*inf))
        {
         	
         pre[i]=c;
          i--;
        }
     push(c);
     push(*inf);
    }
    p=precedence(*inf);
   }

else
 {
  pre[i]=*inf;
          i--;
 }
*inf--;
n--;
}

while(top!=-1)
{
c=pop();
pre[i]=c;
     i--;
}		
printf("%s",pre);
}
