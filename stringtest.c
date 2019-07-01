#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int x,k=0,i,temp=0,l;
    static int count[26];
    printf("enter the string:");
    gets(str);
    while(str[k]!='\0')
    {
        if(str[k]>='a'&&str[k]<='z')
        {
        x=str[k]-'a';
        count[x]++;
        }
        k++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]>temp)
        {
        temp=count[i];
        l=i;
        }
    }
    printf("%c occured %d times\n",l+'a',count[l]);
}
