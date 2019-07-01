#include<stdio.h>
int main()
{
  int n,i,j,count=1,k;
  printf("enter the input\n");
  scanf("%d",&n);
  for(j=1;j<n;j++)
  {
      k=j;
      while(k>0&&count<n+1)
      {
         if(j%2==1)
         {
             printf("%d ,",count);
             count++;
         }
         else
            {
            count=count*(-1);
            printf("%d ,",count);
            count=count*(-1);
            count++;
         }
         k--;
      }
      if(count==n+1)
        break;
  }
}
