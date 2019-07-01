#include<stdio.h>
int main()
{
int n,p,r;
scanf("%d",&n);
p=n/10;
r=n%10;
if(r>0)
{
p=p+1;
}
printf("%d",p);

}
