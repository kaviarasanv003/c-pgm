#include<stdio.h>
#include<string.h>
int main()
{
  char s[100],s1[10][10],f[100];
  int i=0,j,k=0,n,n1,l,c,count,m;
  gets(s);
  printf("enter the substring");
  gets(f);
  n=strlen(s);
  n1=strlen(f);
  while(s[i]!='\0')
  {
    j=0;
    while(j<5&&s[i]!='\0')
    {
    s1[k][j]=s[i];
    j++;i++;
    }
    s1[k][j]='\0';
    if(s[i]!='\0')
    {
    k++;
    }
  }
  for(i=0;i<=k;i++)
  {
   for(j=0;j<4;j++)
   {
    l=j+n1;
    c=0;count=0;
    for(m=j;m<l;m++)
    {
     if(s1[i][m]==f[c])
     {
   
      c++;count++;
     }
     else
     break;
    }
    if(count==n1)
    {
    printf("starting index:%d %d\n",i,j);
    printf("ending index:%d %d\n",i,j+n1-1);
    }
   }
  }
  for(i=0;i<5;i++)
  {
  for(j=0;j<=k;j++)
  {
  l=j+n1;
  c=0;count=0;
  for(m=j;m<l;m++)
  {
   if(s1[m][i]==f[c])
   {
    c++;count++;
   }
   else
   break;
  }
  if(count==n1)
  {
  printf("starting index:%d %d\n",j,i);
  printf("ending index:%d %d\n",j+n1-1,i);
  }
  }
  }
 // for(i=0;i<=k;i++)
  //printf("%s\n",s1[i]);

}
