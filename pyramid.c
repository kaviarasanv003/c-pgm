#include<stdio.h>
int main()
{
int i,j,k,n,count;
printf("enter the number");
scanf("%d",&n);
count=n;
for(i=0;i<n;i++)
{
for(j=count-1;j>0;j--)
{
printf(" ");
}
for(k=2*i+1;k>0;k--)
{
printf("*");
}
printf("\n");
count=count-1;
}
return 0;
}
