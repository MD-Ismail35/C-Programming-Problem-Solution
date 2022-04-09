#include<stdio.h>
int main()
{
    int N,i,j,a,b;
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        a=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                a=2;
                break;
            }
        }
        if(a==1)
        printf("%d ",i);
    }
    return 0;
}
