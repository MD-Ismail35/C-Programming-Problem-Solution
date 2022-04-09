#include<stdio.h>
int main()
{
    int T,N,a=0,li[N],i,j,count=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        for(j=1;j<=N;j++)
        {
            scanf("%d",&li[j]);
            if(li[j]>a){
                   a=li[j];
                   count++;
            }

        }
        if(count==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
