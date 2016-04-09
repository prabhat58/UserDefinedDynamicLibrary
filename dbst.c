#include<stdio.h>
#include"header.h"
#include<stdlib.h>

struct tree *del(struct tree *ptr, int dkey)
{
	struct tree *tmp, *succ;

	if( ptr == NULL)
	{
		printf("dkey not found\n");
		return(ptr);
	}
	if( dkey < ptr->data )
		ptr->left = del(ptr->left, dkey);
	else if( dkey > ptr->data )
		ptr->right = del(ptr->right, dkey);
	else
	{
		if( ptr->left!=NULL  &&  ptr->right!=NULL )
		{
			succ=ptr->right;
			while(succ->left)
				succ=succ->left;
			ptr->data=succ->data;
			ptr->right = del(ptr->right, succ->data);
		}
		else
		{
			tmp = ptr;
			if( ptr->left != NULL )
				ptr = ptr->left;
			else if( ptr->right != NULL)
				ptr = ptr->right;
			else
				ptr = NULL;
			free(tmp);
		}
	}
	return ptr;
}

