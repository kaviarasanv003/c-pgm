
#include<stdio.h>
int main()
{
    int n,i,j,k=1,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
         for(j=1;j<=i;j++)
         {
             printf("%d",k);
             k++;
         }
         printf("\n");
        }
        else
        { k+=i-1;
          for(j=1;j<=i;j++)
         {
             printf("%d",k);
             k--;
         }
         printf("\n");
         k+=i+1;
        }

    }
}
