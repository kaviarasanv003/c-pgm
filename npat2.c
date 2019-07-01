#include<stdio.h>
int main()
{
int i,j,n,count;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    count=1;
for(j=1;j<=i;j++)
{
printf("%d",count);
count++;
}
printf("\n");
}
}
