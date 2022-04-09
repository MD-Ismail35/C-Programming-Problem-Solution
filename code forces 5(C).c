#include<stdio.h>
double avg(double A[],int N)
{
    int i;
    double sum=0.0,C;
    for(i=1;i<=N;i++)
    sum=sum+A[i];

    C=sum/N;
    return C;
}

int main()
{
    int N,i;
    double A[10010],R;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%lf",&A[i]);
    }
   R= avg(A,N);
   printf("%.6lf\n",R);
   return 0;
}
