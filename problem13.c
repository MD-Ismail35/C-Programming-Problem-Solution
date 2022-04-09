
#include <stdio.h>

int main() {

    int N,M,i,b=0;
    char a[7],fechou;
    scanf("%d %d",&N,&M);
    for(i=0;i<M;i++)
    {
        scanf("%s",a);
        if(a==fechou)
        b++;
    }
    printf("%d\n",b);

    return 0;
}
