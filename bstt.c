#include<stdio.h>
#include"header.h"
#include<malloc.h>


void bst()
{
int y,j=1;
 int x,i,count=1;
   struct tree *root,*temp,*father;
 printf("ENTER NUMBER OF THE NODES\n");
 scanf("%d",&y);
  int a[y];
  printf("ENTER ELEMENTS\n");
  for(i=0;i<y;i++)
    scanf("%d",&a[i]);
  root=NULL;
 for(i=0;i<y;i++)
 {
   if(root==NULL)
    root=maketreebst(root,a[i]);
   else
     maketreebst(root,a[i]);
 }
while(j==1)
{
 printf("\n1-INSERT\n2-DELETE\n3-DISPLAY\n");
 scanf("%d",&j);
 switch(j)
 {
   case 1:
     printf("ENTER ELEMENT\n");
     scanf("%d",&j);
     maketreebst(root,j);
     break;
   case 2:
      printf("ENTER ELEMENT\n");
      scanf("%d",&j);
      root=del(root,j);
      break;
   case 3:
     printf("TREE INORDER\n");
     print_inorder(root);
 }
 printf("WANT TO CONTINUE??PRESS 1\n");
 scanf("%d",&j);
}
}

