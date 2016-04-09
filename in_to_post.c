#include<stdio.h>
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
 int i=0,j=-1,k=-1;
 char exp[20];
 char post[20];
 char stack[20];
 
 printf("ENTER THE EXPRESSION\n");
 scanf("%s",exp);
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
  printf("%s",post);
}
