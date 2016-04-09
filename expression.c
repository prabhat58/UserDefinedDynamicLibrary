mytechschool.in/myclasses
shish.ashish@gmail.com

#include <stdio.h>
char s[20];
int top=-1;
void push(char ch)
{
if (top==19)
printf("stack is full");
else
{
top++;
s[top]=ch;
printf("push: %c Top: %d\n",s[top],top);
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

int main()
{
char x[20];
char*p;
int valid;
p=x;
printf("enter expression");
scanf("%s",x);
while(*p!= '\0')
{
	if((*p=='{') || (*p=='[') || (*p=='('))
	{
		push(*p);
		//printf("%d",top);

	} else if((*p=='}') || (*p==']')|| (*p==')'))
		{
			if (top==-1)
			{
				//printf("111111expression is invalid");
				write(1,"hello",5);
				break;
			} else
			  {
				char i;
				i=pop();
  				if ((i=='{')&& (*p=='}'))	valid=1;
  				else if((i=='[') && (*p==']'))   valid=1;
  				else if((i=='(') && (*p==')'))   valid=1;
  				else 
   				{
   					valid=0;
   					printf("expression is invalid\n");
   					break;
   				}
			}
		}
	p++;
}

if(valid)
	printf("expression is valid");
}




