#include<stdio.h>
int main()
{
int a,b,c,ar[2],i,n;
scanf("%d %d %d",&a,&b,&c);
ar[0]=a;ar[1]=b;ar[2]=c;
for(i=0;i<3;i++)
{
n=ar[i];
while(n>0)
{
printf("-");
n--;
}
printf("\n");
}
}
