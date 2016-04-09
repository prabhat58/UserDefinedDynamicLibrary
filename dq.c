#include<stdio.h>
#include"header.h"

void dequeue()
{  
  struct deque s;
  s.f=-1;s.r=-1;s.max=6;
  int i=1;
  while(i==1)
  {
    printf("\nENTER YOUR CHOICE\n1-INSERTION AT BEGINNING\n2-INSERTION AT END\n3-DELETION FROM BEGINNING\n4-DELETION FROM END\n5-DISPLAY\n");
    scanf("%d",&i);
    switch(i)
    {
      case 1:
       insertdq(&s,0);break;
      case 2:
       insertdq(&s,1);break;
      case 3:
       deletedq(&s,0);break;
      case 4:
       deletedq(&s,1);break;
      case 5:
       displaydq(&s); 
    }
   printf("\nWANT TO CONTINUE... PRESS 1\n");
   scanf("%d",&i);
  }
}

