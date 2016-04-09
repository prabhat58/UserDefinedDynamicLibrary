#include<stdio.h>
#include<malloc.h>
#include<math.h>

typedef struct trees
{
 struct trees *left, *right;
 int data;
}tree;

int j=0,i=0,brr[20],arr[20],count=0;

tree *create()
{

tree *t;
int i;

printf("\nEnter data:");
scanf("%d",&i);

if(i==-1)
return NULL;

t=(tree *)malloc(sizeof(tree));
t->data=i;
++count;

printf("\nEnter the left child of %d:",i);
t->left=create();


printf("\nEnter the right child of %d:",i);
t->right=create();

return t;
}

pre(tree *t)
{
 if(t!=NULL)
{
 arr[j++]=t->data;
 pre(t->left);
 pre(t->right);
}
}

find_leaf(tree *t)
{

 if(t!=NULL)
 {
  if(t->left==NULL && t->right==NULL)
  brr[i++]=t->data;
  find_leaf(t->left);
  find_leaf(t->right);
 }
}

locate(tree *t)
{
 for(int k=0;k<i;k++)
    {
      for(j=0;j<count;j++)
         {
          if(brr[k]==arr[j])
            {
             printf("\nThe leaf %d is present at: %d",brr[k],j);
             printf("\nThe predecessor %d is %d",brr[k],brr[j-1]);
             printf("\nThe successor %d is %d",brr[k],brr[j+1]);
            }
         }
    }
}
              
     
  


int main()
{
 tree *t;
 t=create();

printf("\nThe pre-order traversal is:\n");
pre(t);

for(j=0;j<count;j++)
{
 printf("%d",arr[j]);
}

printf("\nThe leaves present are as follows:");
find_leaf(t);
for(j=0;j<i;j++)
{
 printf("%d",brr[j]);
}

printf("\nThe info. derived is as follows:"); 
locate(t);



printf("\n");
return 0;
}


