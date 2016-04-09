#include<stdio.h>
void insertion_sort()
{
 int x,i,j,t,k;

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
  for(i=0;i<(x-1);i++)
  {
    if(a[i+1]<a[i])
    {
      j=i;
       while(a[j]>a[i+1])
        {
          j--;
          if(j<0)
            break;
         }
     t=a[i+1];j++;
     for(k=i;k>=j;k--)
       a[k+1]=a[k];
     a[j]=t;
    }
  }
printf("SORTED ARRAY\n");
for(i=0;i<x;i++)
  printf("%d\t",a[i]);	
 printf("\n");

}

