#include<stdio.h>
int main()
{
 int n,i,j,flag;
 printf("enter the number\n");
 scanf("%d",&n);
 for(i=2;i<=n;i++)
  {
    flag=0;
    for(j=2;j<i;j++)
    {
      if(i%j==0)
      {
        flag=1;
      }
    }
    if(flag==0)
    {
      printf("%d\n",i);
    }
  }
}
