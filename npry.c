#include<stdio.h>
int main()
{
int i,j,n,r,c,k;
scanf("%d",&r);
n=(r/2)+1;
for(i=1;i<=n;i++)
{
  c=1;k=n;
  for(j=i+n-1;j!=0;j--)
  {
   if(k<=i)
   {
    printf("%d",c);
    c++;
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
  c=1;k=i;
  for(j=i+r-1;j>n;j--)
  {
  if(k<=n)
  printf(" ");
  else
  {
    printf("%d",c);
    c++;
  }
  k++;
  }
printf("\n");
}

}
