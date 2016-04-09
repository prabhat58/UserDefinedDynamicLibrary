#include<stdio.h>
#include"header.h"

struct treea * maketreeavl(struct treea *root,int x)
{ 
  struct treea *temp,*temp1;
  if(root==NULL)
  {
   temp=createnodeavl();
   temp->data=x;
   return(temp);
  }
  if(x<root->data)
   root->left=maketreeavl(root->left,x);
  else
   root->right=maketreeavl(root->right,x);

  height(root);
  if(balancefactor(root)>1)
   {
     if(x<(root->left)->data)
       return(rotate_right(root));
     else
       {
         root->left=rotate_left(root->left);
         return(rotate_right(root));
       }
   }
   if(balancefactor(root)<-1)
   {
     if(x>(root->right)->data)
      { temp1=rotate_left(root);
       return(temp1);}
     else
      {
        root->right=rotate_right(root->right);
        return(rotate_left(root));
      }
   }


 return(root);
}

