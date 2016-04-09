#include<stdio.h>
void selection_sort()
{
 int x,i,j,t;
printf("ENTER SIZE OF THE ARRAY\n");
 scanf("%d",&x);
  int a[x];
  printf("ENTER ARRAY\n");
  for(i=0;i<x;i++)
    scanf("%d",&a[i]);

 printf("UNSORTED ARRAY\n");
  for(i=0;i<x;i++)
   printf("%d\t",a[i]);
 printf("\n");
 
 for(i=0;i<x;i++)
 {
   for(j=i+1;j<x;j++)
   {
     if(a[j]<a[i])
      {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
      }
   }
 }
 printf("SORTED ARRAY\n");
 for(i=0;i<x;i++)
  printf("%d\t",a[i]);
 printf("\n");
 
}

