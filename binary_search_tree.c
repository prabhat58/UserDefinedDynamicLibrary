#include<stdio.h>
#include<malloc.h>
int flag;
struct tree
{
  struct tree *left,*right;
  int data;
};
struct tree *createnode()
{
  struct tree *temp;
  temp=(struct tree *)malloc(sizeof(struct tree));
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}

struct tree *maketree(struct tree *root,int x)
{
  struct tree *temp;
  temp=createnode();
  temp->data=x;
  if(root==NULL)
     return(temp);
  else
  {
    while(1)
    {
      if(x>root->data)
      {
         if(root->right==NULL)
           break;
         else
           root=root->right;
      }
      else
      {
         if(root->left==NULL)
           break;
         else
           root=root->left;
      }
    }
    if(x<root->data)
      root->left=temp;
    else
      root->right=temp;
   }
}
void display_inorder(struct tree *root)
{
  if(root==NULL)
  {  }
  else
   {
     display_inorder(root->left);
     printf("%d\t",root->data);
     display_inorder(root->right);
   }
}
struct tree *find(int x,struct tree *root)
{
  while(x!=root->data)
  {
      if(x<root->data)
        root=root->left;
      else
        root=root->right;
  }
    return(root);
}
struct tree *father(struct tree *p,struct tree *root)
{
 while(root->left!=p || root->right!=NULL)
 {
     if(p->data<root->data)
        root=root->left;
     else
        root=root->right;
 }
 return(root);
}

 struct tree *maxm(struct tree *p)
 {
     while(p->right!=NULL)
        p=p->right;
        return p;
 }

void delete(int x,struct tree *root)
{
  struct tree *temp,*p;int t;
  p=find(x,root);
 if(p->left==NULL && p->right==NULL)
    free(p);
 else
 {
     if(p->left==NULL || p->right==NULL)
     {
         temp=father(p,root);
         if(p->left!=NULL)
         {
             if(temp->left==p)
                temp->left=p->left;
             else
                temp->right=p->left;
         }
         else
            {
             if(temp->left==p)
                temp->left=p->right;
             else
                temp->right=p->right;
            }

     }
     else
     {
         temp=maxm(p->left);
         t=temp->data;
         temp->data=p->data;
         p->data=t;
     }
 }

}

int main(int argc,char *argv[])
{
struct tree *root,*temp;
  int a[argc-1],i,j=1;


 for(i=0;i<argc-1;i++)
  a[i]=atoi(argv[i+1]);


  root=NULL;


 for(i=0;i<argc-1;i++)
 {
   if(root==NULL)
    root=maketree(root,a[i]);
   else
     maketree(root,a[i]);
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
     maketree(root,j);
     break;
   case 2:
      printf("ENTER ELEMENT\n");
     scanf("%d",&j);
     delete(j,root);
      break;
   case 3:
     display_inorder(root);
 }
 printf("WANT TO CONTINUE??PRESS 1\n");
 scanf("%d",&j);
}
}




