#include<stdio.h>
int flag=0;
int sort(int b[],int item,int n)
{
 int l,h,mid,i;
 l=0;
 h=n-2;
       while(l<=h)
      {
       mid=(l+h)/2;
        if(item==b[mid])
       {
        flag=1; 
        return mid;
       }
       else if(item<b[mid])
       h=mid-1;
       else 
       l=mid+1;
      }
}
main(int argc, char *argv[])
{
 int a[20],i,k;
for(i=0;i<argc-1;i++)
{
 a[i]=atoi(argv[i+1]);
}
printf("Enter the item to be searched\n");
scanf("%d",&i);
k=sort(a,i,argc);
if(flag==0)
printf("\nElement not found\n");
else
printf("\nThe desired item is at position: %d\n",k+1);
}
