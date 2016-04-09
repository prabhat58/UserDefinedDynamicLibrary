#include<stdio.h>
void inserti(struct link *start,struct link *temp,int n)
{
  int m;
  for(m=1;m<n-1;m++)
   {
     start=start->node;
   }
  temp->node=start->node;
  start->node=temp;
  temp=NULL;
}


