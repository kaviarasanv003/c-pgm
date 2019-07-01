#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
gets(str1);
gets(str2);
int i,j,k,f;
for(i=0;str1[i]!='\0';i++)
  {
    f=0;
    for(j=0;str2[j]!='\0';j++)
     {
      if(str1[i]==str2[j])
      {
      k=j;
      while(str2[k]!='\0')
      {
        str2[k]=str2[k+1];
        k++;
        f=1;
      }

      }
     }
     if(f==0)
     break;
  }
  if(f==1)
  printf("anagrams");
  else
  printf("not anagrams");
}
