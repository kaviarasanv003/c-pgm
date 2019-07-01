#include<stdio.h>
int main()
{
int n,i,j,count=1;
printf("enter the number:");
scanf("%d",&n);
for(i=n;i>0;i--)
{
for(j=1;j<=i;j++)
{
printf("%d ",count);
}
printf("\n");
count++;
}
}
