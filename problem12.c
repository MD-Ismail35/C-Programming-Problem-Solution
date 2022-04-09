#include <stdio.h>

int main() {

    int S,T,F,a;
    scanf("%d %d %d",&S,&T,&F);
    a=S+T+F;
    if(a<24&& a>0)
    printf("%d\n",a);
    else if(a>24 && a>0)
    printf("%d\n",a-24);
    else if(a<0)
    printf("%d\n",24+a);
    else
    printf("0\n");
    return 0;
}
