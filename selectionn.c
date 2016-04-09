#include<stdio.h>

int main(int argc,char *argv[])
{
 int a[argc-1],i,j,t;
 for(i=0;i<argc-1;i++)
  a[i]=atoi(argv[i+1]);

 printf("\n");
 
 for(i=0;i<argc-1;i++)
 {
   
   for(j=i+1;j<argc-1;j++)
   {
     if(a[j]<a[i])
      {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
      }
   }
  
 }

 for(i=0;i<argc-1;i++)
 printf("%d\t",a[i]);

 printf("\n");
 return 0;
}
