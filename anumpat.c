#include<stdio.h>
int main()
{
char str[10],s;
int i,j,k=0;
printf("enter the pattern\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
    s=str[i];
    while((str[i+1]-48)>=0&&(str[i+1]-48)<=9)
    {
        k=(k*10)+(str[i+1]-48);
        i++;
    }
for(j=0;j<k;j++)
{
    printf("%c",s);
}
k=0;

}
}
