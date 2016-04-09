#include<stdio.h>
#include"header.h"

struct tree * father(struct tree *p,struct tree *root)
{
 while(1)
 {
     if(((root->left)==p)||((root->right)==p))
        break;
     if((p->data)<(root->data))
        root=root->left;
     else
        root=root->right;
 }
 return(root);
}

