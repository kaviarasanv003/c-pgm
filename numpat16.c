#include<stdio.h>
int main()
{
int n,i,j,count=0,p;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
p=i;
for(j=n;j>=1;j--)
{
if(j<=i)
{
printf("%d",p);
p=p+count;
}
else
printf(" ");
}
printf("\n");
count++;
}
}
