#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n;
printf("enter the array size");
scanf("%d",&n);
//fib//
int b=1,c=1,i=0,d;
    a[i]=b;
    a[i+2]=c;
for(i=2;i<=n;i+=1)
{
   d=2;
   while(d<n)
   {
       a[i+2]=a[i]+a[i-2];
       d++;
   }
}
//prime//
int j,k,count;
for(i=1;i<=n;i+=2)
{
  for(j=1;j<=i;j++)
    {
        count=0;
        for(k=1;k<=j;k++)
       {
            if(j%k==0)
             count++;
        }
         if(count==2)
           a[i]=j;

}

}
for(i=0;i<=n;i++)
printf("%d\n",a[i]);
printf("index");
scanf("%d",&i);
printf("%d",a[i]);

}







