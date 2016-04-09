#include<stdio.h>
#include"header.h"


struct tree * find_father(int count,int x, struct tree *temp)
 {
   if(x==1)
    {return temp;}
   temp=find_father(count,x/2,temp);
   if(x==count)
   {
      return(temp);
    }
   else
    {
     if(x%2==0)
      return(temp->left);
    else
      return(temp->right);
     }
}
