#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

#define endl printf("\n");

typedef struct avl
{
  int data;
  struct avl * left,*right;
  int height;
}tree;


tree * insert(tree *,int);
void search(tree *);
void options(tree *);
tree * rotLeft(tree *);
tree * rotRight(tree *);
tree * doubLeft(tree *);
tree * doubRight(tree *);
void inor(tree *);
void balance(tree *);


int height(tree *t)
{
  if(t) return t->height;
  else return -1;
}

int max(int a,int b)
{
  return a>b?a:b ;
}


int main()
{
  tree * root;
  options(root);
}

void options(tree *t)
{
 int k,c;
  do
  {
    printf("\n 1: Insert ");
    printf("\n 2: Search ");
    printf("\n 3: Display ");
    printf("\n 4: Balance Factor ");
    scanf("%d",&c);
  
    switch(c) {
    case 1: printf("\n Enter element : "); scanf("%d",&k); t=insert(t,k);  	break;
    case 2: search(t);			break;
    case 3: endl; inor(t); endl;	break;
    case 4: endl; balance(t); endl;	break;
   }
  }while(c!=0);
 
}

 void balance(tree *t)
 {
   if(t!=NULL)
   {
     int c=height(t->left)-height(t->right);
     printf("\n Balance factor of %d is %d ",t->data,c);
    
    balance(t->left);
    balance(t->right);
  }
 }



 tree * insert(tree *t,int k)
 {
   if(t==NULL)
  {
    t=(tree *)malloc(sizeof(tree));
    t->data=k;
    t->left=NULL; t->right=NULL;
    t->height=0;
  }

  else if(k<t->data)
  {
    t->left=insert(t->left,k);
    
    if(height(t->left)-height(t->right)>=2  || height(t->left)-height(t->right)<=-2)
     {
       if(k<t->data && k<t->left->data)
	{
	  printf("\n Single left rotation about %d \n",t->data);
          t=rotLeft(t);
	}
      else 
	{
	  printf("\n Double left rotation about %d \n",t->data);
          t=doubLeft(t);
	}
	
      }
        printf("\n No rotation about left of %d \n",t->data); 
     }

  
  else if(k>t->data)
  {
    t->right=insert(t->right,k);
    
    if(height(t->left)-height(t->right)>=2 || height(t->left)-height(t->right)<=-2 )
     {
       if(k>t->data && k>t->right->data)
	{
	  printf("\n Single right rotation about %d \n",t->data);
          t=rotRight(t);
	}
      else 
	{
	  printf("\n Double right rotation about %d \n",t->data);
          t=doubRight(t);
	}
      }
	printf("\n No rotation about right of %d \n",t->data);
     }


  
  t->height=max(height(t->left),height(t->right)) +1 ;


  }


 tree * rotLeft(tree *t)
 {
   tree *temp=t->left;
   t->left=temp->right;
   temp->right=t;
   
   t->height=max(height(t->left),height(t->right)) +1 ;
   temp->height=max(height(temp->left),height(temp->right)) +1 ;
  
   return temp; 
 } 
 
 tree * rotRight(tree *t)
 {
   tree *temp=t->right;
   t->right=temp->left;
   temp->left=t;
   
   t->height=max(height(t->left),height(t->right)) +1 ;
   temp->height=max(height(temp->left),height(temp->right)) +1 ;
  
   return temp; 
   
 } 

 tree * doubLeft(tree *t)
 {
   t->left=rotRight(t->left);
  
   return rotLeft(t); 
 } 

 tree * doubRight(tree *t)
 {
   t->right=rotLeft(t->right);
  
   return rotRight(t); 
   
 } 




 void search(tree *t)
{
  if(t==NULL)
  {
    printf("\n Tree is empty \n"); return ;
   }
  int k;

  printf("\n Enter element to be searched : ");
  scanf("%d",&k);
 
  int flag=0;
  
  while(t!=NULL)
  {
   if(k==t->data) { flag=1; break; } 
   if(k<t->data) t=t->left;
   else t=t->right ;
 }
  if(flag==1) printf("\n Element found \n");
  else	printf("\n Element not present \n");

}

void inor(tree *t)
{

   if(t)
  {
    inor(t->left);
    printf(" %d ",t->data);
    inor(t->right);
  }
}














