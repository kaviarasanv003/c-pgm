#include<stdio.h>
int main()
{
int i,j,l,n,count,c=2;
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
{
l=i;count=1;
if(l>n)
{
    l=l-c;
    c=c+2;
}
for(j=l+n;j!=0;j--)
{
if(j<=2*l)
{
if(j>l)
{
    printf("%d",count);
    count++;
}
else
{
    count=count-1;
    printf("%d",count);
}
}
else
printf(" ");
}
printf("\n");
}
}
