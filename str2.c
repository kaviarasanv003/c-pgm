#include<stdio.h>
#include<string.h>
int main()
{
char* name;
gets(name);
strrev(name);
printf("%s",name);
return 0;
}
