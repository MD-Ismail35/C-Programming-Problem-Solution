#include<stdio.h>
int main()
{
    double x,result;
    printf("Enter any numers :");
    scanf("%lf",&x);
    result = exp(x);
    printf("exp(%lf) = %lf",x,result);
    return 0;


}
