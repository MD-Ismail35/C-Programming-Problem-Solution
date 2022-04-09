#include<stdio.h>
int main()
{
    int i,j,K,S,m,a=0;
    scanf("%d%d",&K,&S);

    for(i=0;i<=K;i++)
    {
        for(j=0;j<=K;j++)
        {
            if(i+j<=S && (S-(i+j)<=K))
                printf("%d %d \n",i,j);
        }
    }
    //printf("%d\n",a);
    return 0;
}
