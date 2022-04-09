#include<stdio.h>
int main()
{
    long long int N,i,sum=0,e;
    scanf("%lld",&N);
    long long int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%lld",&a[i]);
        sum = sum+a[i];
    }

    e =abs(sum);
    printf("%lld\n",e);
}
