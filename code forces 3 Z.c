#include<stdio.h>
int main()
{
    int t,n,a[110],ss,sp,i,mx,j,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        scanf("%d",&a[j]);
        for(ss=1;ss<=n;ss++)
        {
            for(sp=1;sp+ss<=n+1;sp++)
            {
                for(k=sp;k<=sp+ss;k++)
                {
                    printf("%d ",a[k]);
                }
                  printf("\n");
            }
        }

    }
    return 0;
}
