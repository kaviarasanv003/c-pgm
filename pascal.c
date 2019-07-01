#include<stdio.h>
int main()
{
int i,j,k,x,count,n;
scanf("%d",&n);
count=n-1;
for(i=0;i<n;i++)
 {
 x=1;
  for(k=0;k<count;k++)
   {
    printf(" ");
   }
  for(j=0;j<=i;j++)
   {
    printf("%d",x);
    printf(" ");
    x=x*(i-j)/(j+1);
   }
   printf("\n");
   count--;
 }
}
