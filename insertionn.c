#include<stdio.h>

int main(int argc,char *argv[])
{
 int a[argc-1],i,j,t,k;
 for(i=0;i<argc-1;i++)
  a[i]=atoi(argv[i+1]);

 printf("\n");
 
  for(i=0;i<(argc-2);i++)
  {
    if(a[i+1]<a[i])
    {
      j=i;
       while(a[j]>a[i+1])
        {
          j--;
          if(j<0)
            break;
        }
     t=a[i+1];
     j++;
     for(k=i;k>=j;k--)
         a[k+1]=a[k];
         a[j]=t;
    }
  }
for(i=0;i<(argc-1);i++)
  printf("%d\t",a[i]);

 printf("\n");
 return 0;
}
