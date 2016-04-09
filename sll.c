#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void singly_linked_list()
{
 struct link *start,*last,*temp,*t;
 int i,j,X,n;
 start=NULL;i=1;j=1;
while(j==1)
{
  printf("\n\nINSERT DATA-1\n\nDISPLAY-2\n\nINSERT FROM BEGINNING-3\n\nINSERT FROM LAST-4\n\nINSERT AT ith POSITION FROM THE BEGINNING-5\n\nDELETE FROM BEGINNING-6\n\nDELETE FROM LAST-7\n\nDELETE THE ith FROM BEGINNING-8\n");
 scanf("%d",&X);
switch (X)
{
 case 1:
{
 while(i==1)
{
 if(start==NULL)
 {
  temp=createnode();
  start=temp;
   last=temp;
  printf("ENTER THE DATA\n");
  enterdata(temp);
 }

 else
 {
  temp=createnode();
  last->node=temp;
   last=temp;
  printf("ENTER THE DATA\n");
  enterdata(temp);
 }
 printf("WANT TO INSERT MORE(1/0)???\n");
 scanf("%d",&i);
}
break;
}
 case 2:
{
 display(start);
 break;
}

case 3:
{
  temp=createnode();
  temp->node=start;
  start=temp;
  printf("ENTER THE DATA\n");
  enterdata(temp);
  break;
}
 case 4:
{
 temp=createnode();
 last->node=temp;
 last=temp;
 printf("ENTER THE DATA\n");
 enterdata(temp);
 break;
}
case 5:
{
 printf("ENTER THE VALUE OF i\n");
 scanf("%d",&n);
 t=start;j=1;
 while(t!=NULL)
 {
  t=t->node;
  j++;
 }
if(j<n)
 printf("NO SUCH INDEX\n");
else
{
 temp=createnode();
 inserti(start,temp,n);
 printf("ENTER THE DATA\n");
 enterdata(temp);
}
break;
}
case 6:
{
 start=deletes(start);
 break;
}
case 7:
{
  last=deletel(start);
 break;
}
case 8:
    {
        printf("ENTER THE VALUE OF i\n");
        scanf("%d",&n);
        deletei(start,n);
    }
} printf("WANT TO CONTINUE(1/0)???\n");
 scanf("%d",&j);
}

}

