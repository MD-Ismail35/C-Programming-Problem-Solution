#include<stdio.h>
#include<string.h>
int main()
{
    char str[300],a[100],ch;
    int i;
    gets(str);
    i=0;
    while((ch=str[i])!='\0')
    {
        if(ch!=' ')
        {
            printf("%c",str[i]);

        }

        else
            printf("\n");
        i++;


            //printf("\n");
    }
}
