#include<stdio.h>
#include<stdlib.h>


struct double_link
{
 int item;
 struct double_link *next;
 struct double_link *prev;
};

struct double_link *create(struct double_link *start,struct double_link *last)
{
 struct double_link *temp;
 temp=(struct double_link *)malloc(sizeof(struct double_link));
 printf("ENTER ITEM\n");
 scanf("%d",&temp->item);
 if(start==NULL)
  {
    temp->next=NULL;
    temp->prev=NULL;
  }
 else
  {
   last->next=temp;
   temp->prev=last;
   temp->next=NULL;
  }

  return(temp);
 
}



struct double_link *insert_l(struct double_link *last)
{
   struct double_link *temp;
   temp=(struct double_link *)malloc(sizeof(struct double_link));
   printf("ENTER ITEM\n");
   scanf("%d",&temp->item);
   last->next=temp;
   temp->prev=last;
   temp->next=NULL;
  return(temp);
}



struct double_link *insert_b(struct double_link *start)
{
  struct double_link *temp;
   temp=(struct double_link *)malloc(sizeof(struct double_link));
   printf("ENTER ITEM\n");
    scanf("%d",&temp->item);
   start->prev=temp;
   temp->next=start;
   return(temp);
}



void display(struct double_link *start)
{
  int i=1;
 while(start!=NULL)
 {
   printf("ITEM %d IS %d\n",i++,start->item);
   start=start->next;
 }
}
  
struct double_link *del_l(struct double_link *last)
{
  struct double_link *temp;
  temp=last;
  last=temp->prev;
   free(temp);
   last->next=NULL;
   return(last);
}

struct double_link *del_b(struct double_link *start)
{
 struct double_link *temp;
 temp=start;
 start=start->next;
 start->prev=NULL;
 free(temp);
 temp=NULL;
 return(start);
}




int main()
{
 struct double_link *start,*last,*temp;int i=1;
 start=NULL;
 last=NULL; 

 while(i)
{
  printf("ENTER YOUR CHOICE....\n1-CREATION\n2-INSERT AT LAST\n3-DISPLAY\n4-INSERT AT BEGINNING\n5-DELETE FROM LAST\n6-DELETE FROM    BEGINNING\n");
  scanf("%d",&i);
  switch(i)
  {
   case 1:
   {
    while(i)
    {
     
     if(start==NULL)
     {
      start=create(start,last);
      last=start;
     }
     else
     {
      last=create(start,last);
      temp=NULL;
     }
    printf("WANT TO ENTER MORE(1/0)??");
    scanf("%d",&i);
    }
    break;
  }
  case 2:
  {
    last=insert_l(last);
    break;
  }
  case 3:
  {
   display(start);
   break;
  }
  case 4:
  {
    start=insert_b(start);
    break;
  }
  case 5:
  {
    last=del_l(last);
    break;
  }
  case 6:
  {
    start=del_b(start);
    break;
  }
 }
printf("WANT TO CONTINUE(1/0)??");
scanf("%d",&i);
}
return 0;
}
  
