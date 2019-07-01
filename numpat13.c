#include<stdio.h>
int main()
{
int i,j,n,count=1;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=2;j++)
{
   if(i%2==0&&j==1)
   {
   count=count+1;
   printf("%d ",count);
   }
   else if(i%2==0&&j==2)
   {
   count=count-1;
   printf("%d ",count);
   count=count+2;
   }
   else
   {
   printf("%d ",count);
   count++;
   }
}
printf("\n");
}
}
