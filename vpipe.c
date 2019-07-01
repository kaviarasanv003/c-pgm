#include<stdio.h>
void vertical(int,int,int);
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
vertical(a,b,c);
return 0;
}
void vertical(int x,int y,int z)
{
int n,r;
if(x>y&&x>z)
n=x;
else if(y>z)
n=y;
else
n=z;
r=n;
while(r>0)
{
if(x>=n)
printf("|");
else
printf(" ");
if(y>=n)
printf("|");
else
printf(" ");
if(z>=n)
printf("|");
else
printf(" ");
r--;
x++;
y++;
z++;
printf("\n");

}
}
