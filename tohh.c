#include<stdio.h>
#include<stdlib.h>
void toh(int n,char s,char t,char d)
{
     if (n==1)
    {
     printf("\nMove %d from %c to %c\n",n,s,d);
     return;
    }
 
     toh(n-1,s,d,t);
     printf("\nMove %d from %c to %c\n ",n,s,d);
     toh(n-1,t,s,d);
}

main()
{
int i;
char source='a', temporary='b', destination='c';
printf("Enter the no. of disks: ");
scanf("%d",&i);
toh(i,source,temporary,destination);
}
