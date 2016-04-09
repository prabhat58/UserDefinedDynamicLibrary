#include<stdio.h>

void sort(int b[],int n)
{
 int i,j,temp,l,ind,k;
 for(i=n-1;i>0;i--)
 {
  l=b[0];
  ind=0;
  for(j=1;j<=i;j++)
    {
     if(b[j]>l)
       {
         l=b[j];
         ind=j;
       }
     b[ind]=b[i];
     b[i]=l;
    } 
 }
 for(k=0;k<n-1;i++)
  {
   printf("\n%d\n",b[k]);
  }
}
main(int argc, char *argv[])
{
 int a[argc-1],i;
 for(i=0;i<argc-1;i++)
   {
    a[i]=atoi(argv[i+1]);
   }
sort(a,argc-1);
}
