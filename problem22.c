#include<stdio.h>
int main()
{
    long int X,r;
    scanf("%ld",&X);
    while(X!=0)
    {
        r=X%10;
        X=X/10;
    }
    if(r%2==0)
    printf("EVEN\n");
    else
    printf("ODD\n");
}
