#include <stdio.h>

int main() {

    int N,X[N],i,a,b=1;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d ",&X[i]);
    }
    a=X[0];
    for(i=1;i<N;i++)
    {
        if(a>X[i])
        {
          a=X[i];
          b++;
        }
    }
    printf("Menor valor: %d\n",a);
    printf("Posicao: %d\n",b);

    return 0;
}
