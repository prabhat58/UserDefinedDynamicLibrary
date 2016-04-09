#include<stdio.h>
void main(int argc,char *argv[])
{
 int arr[argc-1],a,b,temp;
 for(a=0;a<argc-1;a++)
    {
     arr[a]=atoi(argv[a+1]);
    }
 printf("\n");
 
 for(a=0;a<argc-1;a++)
 {
   for(b=a+1;b<argc-1;b++)
   {
     if(arr[b]<arr[a])
      {
       temp=arr[a];
       arr[a]=arr[b];
       arr[b]=temp;
      }
   }
  
 }

 printf("After sorting, the elements are:\n");
 for(a=0;a<argc-1;a++)
    {
     printf("%d\t",arr[a]);
    }
 printf("\n");
 
}
