#include<stdio.h>
int main()
{
int i,j,k,count,n,r;
printf("enter the number:");
scanf("%d",&r);
n=(r/2)+1;
for(i=1;i<=n;i++)
{
  count=1;k=n;
  for(j=i+n-1;j!=0;j--)
  {
  if(k<=i)
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
n=r-n;
for(i=n;i>=1;i--)
{
  count=1;k=i;
  for(j=i+r-1;j>n;j--)
  {
  if(k<=n)
  {
  printf(" ");
  }
  else
  {
  printf("%d",count);
  count++;
  }
  k++;
  }
  printf("\n");
}
}
