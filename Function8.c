#include<stdio.h>
int main()
{
    char str[]="Ismail";
    display(str);
}
void display(char s1[])
{
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
}
