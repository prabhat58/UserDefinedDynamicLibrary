#include<stdio.h>
struct queue
{
 int q[20];
 int front,rear,max;
};
void insert(struct queue *p)
{
 if(p->rear==p->max)
   printf("QUEUE IS FULL\n");
 else
  {
    printf("ENTER THE ITEM\n");
     ++(p->rear);
     scanf("%d",&p->q[p->rear]);
    printf("ITEM INSERTED=%d\n",p->q[p->rear]);
    if(p->front==-1)
      ++(p->front);
  }
}
void delete(struct queue *p)
{
  if(p->front==-1)
    printf("QUEUE IS EMPTY\n");
  else
   {
     printf("THE ITEM DELETED=%d\n",p->q[(p->front)++]);
     if(p->front>p->rear)
       p->front=p->rear=-1;
   }
}
void display(struct queue *p)
{
  int x;
  if(p->rear==-1)
  printf("QUEUE IS EMPTY\n");
 else
  {
    x=p->front;
     printf(" QUEUE : \n");
    while(x<=p->rear)
      printf("%d\n",p->q[x++]);
  }

}
int main()
{
 struct queue q;
 int x=1;
 q.front=-1;
 q.rear=-1;
 q.max=19;
 while(x==1)
 {
  printf("Options:\n1:INSERT\n2:DELETE\n3-DISPLAY\n");
  scanf("%d",&x);
  switch(x)
  {
    case 1:
      insert(&q);
      break;
    case 2:
       delete(&q);
       break;
    case 3:
       display(&q);
  }
  printf("WANT TO CONTINUE??\nPRESS '1'\n");
  scanf("%d",&x);
 }
}
