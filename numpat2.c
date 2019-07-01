#include<stdio.h>
int main()
{
int n,i,j,count,k;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
count=i-1;
k=n;
for(j=i+n-1;j!=0;j--)
{

if(k<=i&&k>0)
{
count=count+1;
printf("%d",count);
}
else if(j<i)
{
    printf("%d",--count);
}
else
{
printf(" ");
}
k--;
}
printf("\n");
}
}
