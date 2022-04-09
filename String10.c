//Comparing string using strcmp() function
#include<stdio.h>
int main()
{
    char str1[]="Anisul Islam";
    char str2[]="Anisul";

    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("Strings are equal");
    }
    else
        printf("Strings are not equal");

    getch();

}
