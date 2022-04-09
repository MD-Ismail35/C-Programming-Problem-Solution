#include<stdio.h>
void copy(int C[ ],int A[ ],int B[ ],int N)
{
    int T,i,j;
    T=N+N;
    for(i=0;i<N;i++)
    C[i]=B[i];
    for(i=N,j=0;i<T;i++,j++)
    C[i]=A[j];
}

int main()
{
    int N,A[100010],B[100010],i,C[100010];
    scanf("%d",&N);

      for(i=0;i<N;i++)
      scanf("%d",&A[i]);
      for(i=0;i<N;i++)
      scanf("%d",&B[i]);


   copy(C,A,B,N);
   for(i=0;i<N+N;i++)
   printf("%d ",C[i]);
   printf("\n");
   return 0;
}

