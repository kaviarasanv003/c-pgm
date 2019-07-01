#include<stdio.h>
int main()
{
int i,n,j,k,l,count,c=1;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
{
k=n;
l=i;
if(l>=n)
{
  l=l-2*c;
  c++;
}
count=1;
for(j=l+n-1;j!=0;j--)
{
if(k<=l)
{
printf("%d",count);
count++;
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
