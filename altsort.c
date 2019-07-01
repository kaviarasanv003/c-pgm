#include<stdio.h>
int main()
{
int a[10],n,i,j,temp,k=0,l;
printf("enter the total numbers:");
scanf("%d",&n);
l=n-1;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]<a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{

    if(i%2==0)
    {

        printf("%d ",a[l]);
        l--;
    }
    else{
        printf("%d ",a[k]);
        k++;

    }
}

}
