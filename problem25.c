
#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    long int X[N],a,max;
    scanf("%ld",&a);
    max=a;
    for(i=2;i<=N;i++)
    {
        scanf("%ld",&X[i]);
        if(X[i]>max)
        {
            max=X[i];

        }

    }
    if(max==a)
    printf("%ld\n",a);
    else
    printf("%ld\n",max);
}
