#include<stdio.h>
int main()
{
  int n,k=0;
  char u[100],p[100];
  FILE *ft;
  ft=fopen("file.txt","rb+");
  printf("enter the choice");
  printf("\n1.login \n2.signup");
  scanf("%d",&n);
  struct login
  {
      char name[100];
      char pass[100];
  };
  struct login l;
  if(ft==NULL)
  {
      printf("file does not exist");
  }
  switch(n)
  {
  case 1:
  printf("enter username and password");
  scanf("%s %s",u,p);
  rewind(ft);
  while(fread(&l,sizeof(l),1,ft)==1)
  {
  if(strcmp(u,l.name)==0&&strcmp(p,l.pass)==0)
  {
    printf("login successful");
    k=1;
    break;i
  }
  }
  if(k==0)
    printf("username or password incorrect");
  break;
  case 2:
    fseek(ft,0,SEEK_END);
    printf("enter username and password");
    scanf("%s %s",l.name,l.pass);
    fwrite(&l,sizeof(l),1,ft);
    break;
  }
  fclose(ft);
}
