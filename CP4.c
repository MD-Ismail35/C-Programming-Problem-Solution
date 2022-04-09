#include<stdio.h>
int main()
{
    int j,a=0,e=0,i=0,o=0,u=0,sum;
    char str[200];
    scanf("%s",str);
    strlwr(str);
    while(str[j]!=0)
    {
        if(str[j]=='a')
            a=1;
        if(str[j]=='e')
            e=1;
        if(str[j]=='i')
            i=1;
        if(str[j]=='o')
            o=1;
        if(str[j]=='u')
            u=1;
            j++;
    }
    sum=a+e+i+o+u;
    if(sum>=3)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
