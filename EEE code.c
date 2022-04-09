#include<stdio.h>
int main()
{
    int x=100,y=200,z,t;
    printf("%d",(x>y)?y:x);
    z=(x<100)?y:x;
    t = (z==x)?x:y;
    printf("x = %d,z = %d,t = %d",x,z,t);
    return 0;
}
