#include<stdio.h>
int main()
{
  int n,a[10],i,j;
  static int b[10];
  printf("enter the total numbers:\n");
  scanf("%d",&n);
  printf("enter the numbers:\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    for(j=2;j<a[i];j++)
      {
        if(a[i]%j==0)
        {
          b[i]=j;
          break;
        }
      }
      if(b[i]==0)
        b[i]=1;
  }
  printf("\nsorted array based on minimum factors\n");
  for(j=1;j<100;j++)
  {
    for(i=0;i<n;i++)
    {
      if(b[i]==j)
       printf("%d\n",a[i]);
    }
  }

}
