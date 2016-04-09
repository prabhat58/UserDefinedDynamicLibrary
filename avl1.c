#include<stdio.h>
#include"header.h"
#include<malloc.h>


void avl()
{
  int x,i,j,count=1;
   struct treea *root;
   root=NULL;
   printf("ENTER NUMBER OF THE NODES\n");
 scanf("%d",&x);
  int a[x];
  printf("ENTER ELEMENTS\n");
  for(i=0;i<x;i++)
   scanf("%d",&a[i]);

 for(i=0;i<x;i++)
   root=maketreeavl(root,a[i]);
printf("INORDER\n");
print_inordera(root);

}
