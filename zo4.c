#include<stdio.h>
int main()
{
int n,a[10],b[10],i,j=0,count,temp,x,sum=0;
printf("enter the total numbers:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
for(i=0;i<n;i++)
  {
    while(a[i]>0)
    {
      x=a[i]%10;
      b[j]=x;
      j++;
      a[i]=a[i]/10;
    }
  }
count=j;
for(i=0;i<count;i++)
  {
    for(j=i;j<count;j++)
     {
       if(b[j]>b[i])
       {
         temp=b[i];
         b[i]=b[j];
         b[j]=temp;
       }
     }
  }
for(i=0;i<count;i++)
{
    sum=sum*10+b[i];
}
printf("largest number=%d\n",sum);
}
