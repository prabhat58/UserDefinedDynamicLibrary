#include<stdio.h>
#include<malloc.h>

struct tree
{
 struct tree* left;
 struct tree* right;
 int info;
}tree;

tree *createnode(int x)
{
 tree* temp;
 temp=(tree*)malloc(sizeof(tree));
 temp->info=x;
 temp->left=NULL;
 temp->right=NULL;
  
 return temp;
}

void main()
{
 int a;
 printf("Enter the parent node");
 scanf("%d",&a);
 tree *temp,*x,*y;
 temp=createnode(a);
 

if(1)
{
 printf("Enter the next element");
 scanf("%d",&a);
    x=y=temp;
    while(a!=0&&y!=NULL)
   {
    x=y;
    
    if(a<x->info)
    y=p->left;
    
    else
    y=p->right;
   }
if(a<temp->info)
   setleft(x,a);
else
   setright(x,a);         
            

}


