#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    long int A[N],sum=0;
    for(i=0;i<N;i++)
    {
        scanf("%1ld",&A[i]);
        sum=sum+A[i];
    }
    /*for(i=0;i<N;i++)
    {
        sum=sum+A[i];
    }*/
    printf("%ld\n",sum);

}


