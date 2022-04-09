#include <stdio.h>

int main() {

    int M,N,count=0,i;
    scanf("%d %d",&M,&N);
    if(M>N && N>0)
    {
        for(i=N;i<=M;i++)
        {
            printf("%d ",i);
            count=count+i;
        }
        printf("Sum=%d\n",count);
    }

   else if(M<N && M>0)
    {
        for(i=M;i<=N;i++)
        {
            printf("%d ",i);
            count=count+i;
        }
        printf("Sum=%d\n",count);
    }

    return 0;
}
