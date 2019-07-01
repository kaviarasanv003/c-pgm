#include<stdio.h>
int main()
{
int i,j,count,n;
printf("enter the number:");
scanf("%d",&n);
count=1;
for(i=1;i<=n;i++)
{

  for(j=n;j!=0;j--)
  {
  if(j<=i)
  {
  printf("%d",j);
  }
  else
    printf(" ");
  }
printf("\n");
}
}
