#include<stdio.h>
int main()
{
  char str[100]="He is a good programmer and also a good student";
  char s[2]=" ";

   char *token;
   token = strtok(str,s);
  while(token != NULL)
   {
    printf("%s\n",token);
    token = strtok(NULL,s);
  }

  return 0;

}
