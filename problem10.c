#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
    printf("0%d/0%d/%d\n",b,a,c);
    printf("%d/0%d/0%d\n",c,b,a);
    printf("0%d-0%d-%d\n",a,b,c);

    return 0;
}
