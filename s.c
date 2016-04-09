#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
  int data;
  struct tree *left, *right;
}tree;

int a[13], count=0,j=0;

tree *create()
{
	tree *t;
	int i;
	printf("enter data\n");
	scanf("%d",&i);
	
	if(i==-1)
	return NULL;

	t=(tree *)malloc(sizeof(tree));
	t->data=i; count++;
	
	printf("enter left child of %d\n",i);
	t->left = create();

	printf("enter right child of %d\n",i);
	t->right = create();

	return t;
}

void inorder(tree *t)
{
if(t!=NULL)
{
inorder(t->left);
printf("%d ",t->data);
inorder(t->right);
}
}

tree *copy(tree *t1)
{
tree *t2;
t2=(tree *)malloc(sizeof(tree));
if(t1==NULL)
 return NULL;

t2=t1;

t2->left=t1->left;
copy(t1->left);

t2->right=t1->right;
copy(t2->right);

return t2;
}

tree *mirror(tree *t2)
{
tree *temp;
temp=(tree*)malloc(sizeof(tree*));
if (t2==NULL)
 return NULL;

temp->left=t2->left;
temp->right=t2->right;
t2->left=temp->right;
t2->right=temp->left;
mirror(t2->left);
mirror(t2->right);
 
 return t2;
}

int main()
{
tree *t1,*t2;
t1=create();
inorder(t1);
printf("\n");
t2=copy(t1);
inorder(t2);
printf("\n");
t2=mirror(t2);
inorder(t2);
}
