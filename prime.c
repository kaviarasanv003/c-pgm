#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c,j,flag;
printf("enter the numbers");
scanf("%d",&n);
printf("prime numbers are:\n");
for(i=1;i<=n;i++)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
    c++;
}
if(c==2)
printf("%d\n",i);
}
}


