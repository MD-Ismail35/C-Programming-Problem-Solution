//String concatenation using strcat() function
#include<stdio.h>
int main()
{
    char str1[]= "My name is ";
    char str2[]= "Anisul Islam";

    strcat(str1,str2);
    printf("str1= %s",str1);
    getch();

}
