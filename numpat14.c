#include<stdio.h>
int main()
{
int n,i,j,l,count;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
count=i;
l=n-1;
  for(j=1;j<=i;j++)
  {
   printf("%d",count);
   count=count+l;
   l--;
  }
   printf("\n");

}
}
