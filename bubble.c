#include<stdio.h>

void sort(int b[],int n)
{
 int i,j,temp;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i;j++)
   {
     if(b[j]>b[j+1])
     {
      temp=b[j];
      b[j]=b[j+1];
      b[j+1]=temp;
     }
   } 
 }
for(i=1;i<=n;i++)
 {
  printf("\n%d\n",b[i]);
 }
}
void main(int argc, char *argv[])
{
 int a[argc-1],i;
for(i=0;i<argc-1;i++)
   {
    a[i]=atoi(argv[i+1]);
   }
sort(a,argc-1);
}
