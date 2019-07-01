#include<stdio.h>
int main()
{
  int n1,n2,a[20],b[20],i,j;
  printf("Enter the size of first array");
  scanf("\n%d",&n1);
  printf("Enter the size of second array");
  scanf("\n%d",&n2);
  for(i=0;i<n1;i++)
   scanf("%d",&a[i]);
  for(i=0;i<n2;i++)
   scanf("%d",&b[i]);
  for(i=0;i<n1;i++)
  {
    for(j=0;j<n2;j++)
    {
      if(a[i]==b[j])
      {
          a[i]=0;
          b[j]=0;
          break;
      }
    }
  }
  for(i=0;i<n1;i++)
  {
      if(a[i]>0)
        printf("\nelement %d present in %d position in array1",a[i],i+1);
  }
  for(i=0;i<n2;i++)
  {
      if(b[i]>0)
        printf("\nelement %d present in %d position in array2",b[i],i+1);
  }


}
