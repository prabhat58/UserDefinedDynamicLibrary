#include<stdio.h>
#include<stdlib.h>
int value(char c)
{
  if(c=='+'||c=='-'||c=='*'||c=='/'||c=='$')
   return(1);
  if(c>=97&&c<=122)
   return(2);
}
int prece(char ch)
{
  int i;
  switch(ch)
  {
    case '(':
      i=0;
      break;
    case '+':
      i=1;
      break;
    case '-':
      i=1;
      break;
    case '*':
      i=2;
      break;
    case '/':
      i=2;
      break;
    case '$':
      i=3;
  }   
   return i;
}


int main()
{
 int i=0,x=0,y=0,j=-1,k=-1;
 char exp[20],stack[20],post[20];
 printf("ENTER THE EXPRESSION: \n");
 scanf("%s",exp);
 stack[++j]=exp[i++];
 while(exp[i]!='\0')
 {
   
    if(value(exp[i])==value(stack[j]))
    { 
      if(exp[i]=='('||exp[i])
       {}
    else
      {
     printf("INVALID EXPRESSION\n");
     exit(0);
     break;
     }
    }
    else
   
     stack[++j]=exp[i];
    if(exp[i]=='(')
      x++;
    if(exp[i]==')')
      x--;
    if(x<0)
    {
      printf("INVALID EXPRESSION\n");
      exit(1);
      break;
    }
    i++;
}
 if(exp[i]=='\0'&&x==0)
  printf("VALID EXPRESSION\n");
 else
  {printf("INVALID EXPRESSION\n");exit(2);}

 i=0;j=-1;
 printf("\nPOSTFIX EXPRESSION : \n");

 while(exp[i]!='\0')
 {
   if((exp[i]>=48&&exp[i]<=57)||(exp[i]>=97&&exp[i]<=122))
    post[++j]=exp[i];
   else
    {
      if(k==-1)
        stack[++k]=exp[i];
      else
      {
        if(exp[i]==')')
         {
             while(stack[k]!='(')
                post[++j]=stack[k--];
                  k--; 
         }
        else
         {  
           if((exp[i]=='(')||(prece(exp[i])>prece(stack[k])))
                stack[++k]=exp[i];
           else
           {
            while(prece(exp[i])<prece(stack[k])||k!=-1)
             {
               j++;
               post[j]=stack[k];
               k--;
             } 
            stack[++k]=exp[i];
           }
         }  
       }
     }

   i++;
}
 while(k>=0)
 post[++j]=stack[k--];
 post[++j]='\0';
 printf("\n%s\n",post);
}
