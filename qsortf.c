#include<stdio.h>
#include"header.h"

void sort(int a[],int l,int h)
{
  int j;
 if(l<h)
 {
   j=partition(a,l,h);
   sort(a,l,h-1);
   sort(a,l+1,h);
  }
}
