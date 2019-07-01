#include<stdio.h>
int main()
{
 int n,f,i,j,l,flag=1,k,a[50];
 printf("enter the total number of bits");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("enter the frequency");
 scanf("%d",&f);
 for(i=0;i<n;i++)
 {
  k=n;
  if(a[i]==1)
  {
   l=i+f;
   for(j=i+1;j<l;j++)
   {
    if(a[j]!=1)
    {
     flag=0;
     break;
    }
    else{
        flag=1;
    }
   }
  }
  if(flag==1)
  {
   if(i==n-f)
   {
       a[k]=0;
   }
   else{
   while(k>i+f)
   {
    a[k]=a[k-1];
    k--;
   }
   a[k]=0;
  }
  n++;
  }
 }
 for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
}
