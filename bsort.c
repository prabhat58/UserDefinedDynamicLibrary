#include<stdio.h>
void bubble_sort()
{
 int x,i,j=1,t;
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
   for(j=1;j<(x-i);j++)
   {
    if(a[j]<a[j-1])
    {
     t=a[j];
     a[j]=a[j-1];
     a[j-1]=t;
    }
   }
  }
 printf("\nSORTED ARRAY\n");
 for(i=0;i<x;i++)
  printf("%d\t",a[i]);

 printf("\n");
}
