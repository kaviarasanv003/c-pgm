#include<stdio.h>
int main()
{
int n,i,j,k,l,count,c=2;
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
{
  k=n;l=i;count=1;
  if(l>n)
  {
      l=l-c;
      c=c+2;
  }
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
