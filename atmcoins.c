#include<stdio.h>
int atm(int coins);
int main()
{
int amount;
printf("enter the amount");
scanf("%d",&amount);
atm(amount);
return 0;
}
int atm(int coins)
{
int f,f0,r,c=1;
static int d;
while(c==1)
{
f=coins/5;
r=coins%5;
if(r%4==0)
{
f0=r/4;
c=2;
}
else
{
coins=coins-4;
d++;
}
}
f0=f0+d;
printf("%d five coins %d four coins",f,f0);
}
