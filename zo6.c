#include<stdio.h>
int main()
{
  int n,a[10],i,d,f=0,x,c,k,j;
  printf("enter the total numbers");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter the number");
    scanf("%d",&a[i]);
  }
  printf("enter a digit");
  scanf("%d",&d);
  while(f==0)
  {
  for(i=0;i<n;i++)
  {
   c=a[i];
   while(c>0)
   {
     x=c%10;
     if(x==d)
     {
       a[i]=-1;
     }
     c=c/10;

   }

  }
  for(i=0;i<n;i++)
  {
    if(a[i]!=-1)
    {
      f=0;
      break;
    }
    else
    {
    f=1;
    }
  }
  if(f==0)
  {
   printf("enter the digit");
   scanf("%d",&d);
  }
  else
  printf("the list is empty");
  }
}
