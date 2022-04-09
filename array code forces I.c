#include<stdio.h>
int main()
{
    int N,M,i,j;
    scanf("%d %d",&N,&M);
    long int A[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=N-1;j>=0;j--)
        {
            printf("%ld ",A[i][j]);
        }
        printf("\n");
    }
}
