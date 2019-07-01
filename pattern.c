#include<stdio.h>
void main()
{
int n,i,j;
printf("enter the no of rows");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if(i==j)
{
printf("1");
}
else if(j<i)
printf("0");
else
printf("1");
}
printf("\n");
}
}
