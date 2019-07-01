#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,n,c,count;
printf("enter the numbers");
scanf("%d",&n);
printf("Fibonacci series is\n");
printf("%d\n%d\n",a,b);
count=2;
while(count<n)
{
c=a+b;
a=b;
b=c;
count++;
printf("%d\n",c);
}
}
