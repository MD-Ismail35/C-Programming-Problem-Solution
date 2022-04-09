#include<stdio.h>
int main()
{
    char S[11];
    int i;
    S[5]='\n';
    for(i=0;S[i]!='/n';i++)
    {
        scanf(" %c",&S[i]);
        printf("%c\n",S[i]);
    }


    return 0;
}
