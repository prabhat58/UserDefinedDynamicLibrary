#include<stdio.h>
#include<stdlib.h>
#include"header.h"


void quick_sort()
{
  int x,i,j;
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

   sort(a,0,x-1);

  printf("SORTED ARRAY\n");
 for(i=0;i<x;i++)
  printf("%d\t",a[i]);
   printf("\n");
 printf("\n");
 
}

