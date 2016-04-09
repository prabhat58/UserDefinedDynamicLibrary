#include<stdio.h>

sort(int a[],int l,int h)
{
 int j;
 if(l<h)
 {
   j=partition(a,l,h);
   sort(a,l,j-1);
   sort(a,j+1,h);
 }
}

int partition(int a[],int l,int h)
{
  int b,i,j,t;
  b=a[h];
  i=l-1;
 for(j=l;j<h;j++)
  {
     if(a[j]<=b)
   {
     i++;
     t=a[i];
     a[i]=a[j];
     a[j]=t;
   }
  }
  t=a[i+1];
  a[i+1]=a[h];
  a[h]=t;

  return(i+1);
}

int main(int argc,char *argv[])
{
  int a[argc-1],i,j;
  
  for(i=0;i<argc-1;i++)
      {
       a[i]=atoi(argv[i+1]);
      }
  sort(a,0,argc-2);
  for(i=0;i<argc-1;i++)
      {
       printf("%d\n",a[i]);
      } 
  printf("\n");
}
