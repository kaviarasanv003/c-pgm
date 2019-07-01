#include<stdio.h>
int main()
{
  int a[20],n,x,i,j,temp,t;
  static int count[20];
  printf("Enter the total numbers:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i]==a[j])
      {
        count[i]++;
      }
    }
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(count[j]>count[i])
          {
              temp=count[i];t=a[i];
              count[i]=count[j];a[i]=a[j];
              count[j]=temp;a[j]=t;
          }
      }
  }
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
  }
}
