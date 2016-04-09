#include<stdio.h>
#include<stdlib.h>
int deletei(struct link *start,int i)
{
  struct link *temp=start->node;
  int t;
  for(t=2;t<i;t++)
  {
    if(temp==NULL)
      {
        printf("NO SUCH INDEX");
        return 0;
      }
      else
      {
        start=start->node;
        temp=temp->node;
      }
  }
  start->node=temp->node;
  free(temp);
  return 1;
}

