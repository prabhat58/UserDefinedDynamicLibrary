#include<malloc.h>
#include"header.h"
struct link * createnode()
{
 struct link *temp;
 temp=(struct link *)malloc(sizeof(struct link));
 temp->node=NULL;
 return(temp);
}
