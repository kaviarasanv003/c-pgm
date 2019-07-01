#include<stdio.h>
void atm(int amount)
{
static int t,r1,f,r2,h;
if(amount>=2000)
{
t=amount/2000;
r1=amount%2000;
if(r1>=500&&r1!=0)
{
f=r1/500;
r2=r1%500;
if(r2>=100&&r2!=0)
{
h=r2/100;
}
}
}
else if(amount>=500&&amount<2000)
{
f=amount/500;
r2=amount%500;
if(r2>=100&&r2!=0)
{
h=r2/100;
}
}
else
{
h=amount/100;
}
printf("2notes=%d 5notes=%d 1notes=%d",t,f,h);
}
int main()
{
int money;
printf("enter the amount");
scanf("%d",&money);
atm(money);
}
