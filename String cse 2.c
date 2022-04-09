#include<stdio.h>
#include<string.h>
int main()
{
    char str[80] = "computer science";
    int i,j,len,count[255];
    //printf(" %s\n",str);

    for(i='a';i<='z';i++)
    {
        count[i]=0;
    }
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        count[str[i]] = count[str[i]]+1;
    }
    for(i=97;i<=122;i++)
    {
        if(count[i]!=0)
        {
            printf("%c %d\n",i,count[i]);
        }
    }
    int max=0,ind=0;
    for(i='a';i<='z';i++)
    {
        if(count[i]>1){
                ind =i;
            printf("%c,",ind);
        }
    }

    return 0;
}
