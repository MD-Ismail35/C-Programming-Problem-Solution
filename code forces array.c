#include<stdio.h>
int main()
{
    int N,i;
    long long int sum=0,temp,A,rem;
    scanf("%d",&N);
    scanf("%lld",&A);
    temp=A;
    for(i=0;i<N;i++)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("%lld\n",sum);
}
