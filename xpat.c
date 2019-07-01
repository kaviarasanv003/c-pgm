#include<stdio.h>
int main()
{
int n,i,j,l,f,count=0;
char str[100];
gets(str);
for(i=0;str[i]!='\0';i++)
{
    count++;
}
l=count;
f=count-1;
for(i=0;i<l;i++)
{
    for(j=0;j<l;j++)
    {
        if(i==j)
            printf("%c",str[i]);
        else if(i+j==l-1)
            printf("%c",str[f]);
        else
                printf(" ");

    }
f--;
printf("\n");
}
}
