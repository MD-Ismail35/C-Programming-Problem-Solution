#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char S[1010];
    int len,i,j;
    gets(S);
    len = strlen(S);
    for(i=0;i<len;i++)
    {
        if(S[i]==" ")
        {continue;
        }
        else
        {
            for(j=i-1;i!=" ";j--)
             printf("%c",S[j]);
        }
    }


    /*while(scanf("%s",&S)!=EOF)
    {
        len=strlen(S);
        for(j=0,i=len-1;i>=1;i--,j++)
            printf("%c",S[i]);
            printf("%c ",S[0]);
            //printf("%c",S[i]);
    }*/
    printf(" \n");
    return 0;
}
