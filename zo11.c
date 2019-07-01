#include<stdio.h>
int main()
{
 int c=0,n,a[10],i,j,temp=0,k,x,y;
 printf("enter the number of elements\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 printf("\n");
 for(i=0;i<n;i++)
 {
    if(a[i]>temp)
        temp=a[i];
 }
 x=0;y=1;
 while(c<temp)
 {
     c=x+y;
     for(i=0;i<n;i++)
     {
      if(a[i]==c||a[i]==0)
      {
          printf("%d ",a[i]);
      }
     }
     x=y;
     y=c;
 }



}
