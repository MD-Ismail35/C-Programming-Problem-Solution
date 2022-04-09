#include<stdio.h>
int main()
{
    int A,B,S,c[50],cnt=0,i,d;
    scanf("%d%d",&A,&B);
    S=A+B+1;
    for(i=1;i<=S;i++)
        scanf("%1d",&c[i]);

    d=A+1;
    for(i=1;i<=S;i++)
    {
        if(c[d] ==45)
        cnt++;
    }

    if(cnt==0)
    printf("No\n");
    else
    printf("Yes\n");

    return 0;
}
