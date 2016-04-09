#include<stdio.h>

int partition(int a[],int l,int h)
{
  int x,t,i,j;
 x=a[h];
 i=l-1;
 for(j=l;j<=h-1;j++)
   if(a[j]<=x)
   {
     i++;
     t=a[i];
     a[i]=a[j];
     a[j]=t;
   }
  t=a[i+1];
  a[i+1]=a[h];
  a[h]=t;
return(i+1);
}

