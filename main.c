#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int main()
{

 int i;
while(1)
{
 printf("ENTER YOUR CHOICE\n");
 printf("1-SORTING\n2-SINGLY LINKED LIST\n3-STACK AND QUEUE\n4-TREE\n0-EXIT\n");
 scanf("%d",&i);
 switch(i)
 {
   case 1:
       printf("ENTER YOUR CHOICE\n");
       printf("1-BUBBLE SORT\n2-SELECTION SORT\n3-INSERTION SORT\n4-QUICK SORT\n");
       scanf("%d",&i);
       switch(i)
       {
         case 1:
            bubble_sort();
            break;
         case 2:
            selection_sort();
            break;
         case 3:
            insertion_sort();
            break;
         case 4:
             quick_sort();
              break;
       }
       break;
   case 2:
        singly_linked_list();
   case 3:
        printf("ENTER YOUR CHOICE\n");
        printf("1-STACK\n2-QUEUE\n3-CIRCULAR QUEUE\n4-DOUBLE ENDED QUEUE\n");
        scanf("%d",&i);
        switch(i)
        {
          case 1:
             printf("MAXIMUM SIZE OF STACK IS 7\n");
             stack();
             break;
          case 2:
             printf("MAXIMUM SIZE OF QUEUE IS 7\n");
             queue();
             break;
          case 3:
             printf("MAXIMUM SIZE OF QUEUE IS 7\n");
             circular_queue();
             break;
          case 4:
             printf("MAXIMUM SIZE OF QUEUE IS 7\n");
             dequeue();
             break;
                  }
        break;
   case 4:
         printf("ENTER YOUR CHOICE\n");
         printf("1-LEVEL ORDER TREE-CREATION & TRAVERSAL\n2-BST\n3-AVL\n");
         scanf("%d",&i);
            switch(i)
            {
              case 1:
               level_tree();
               break;
              case 2:
               bst();
               break;
            }
          break;	

   case 0:
      exit(0);

 }
}

return 0;
}
