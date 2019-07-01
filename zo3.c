#include<stdio.h>
int main()
{
  int n,d,a[20],x,i=0,j,sum;
  printf("enter the number");
  scanf("%d",&n);
  printf("enter the digit");
  scanf("%d",&d);
  while(n>0)
  {
   x=n%10;
   a[i]=x;
   i++;
   n=n/10;
  }
  for(j=i-1;j>=0;j--)
  {
    sum=a[j]+d;
    printf("%d",sum);
  }
}
