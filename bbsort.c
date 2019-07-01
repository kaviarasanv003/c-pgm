#include<stdio.h>
int main()
{
int n,a[10],i,j,temp,flag;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
flag=0;
for(j=0;j<=n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;
}
}
if(flag==0)
break;
}
for(i=0;i<n;i++)
printf("\n%d",a[i]);
}
