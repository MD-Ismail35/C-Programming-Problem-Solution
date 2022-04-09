#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    printf("Enter any numbers =");
    scanf("%lf",&x);
    result = sin(x);
    printf("sin(%lf) = %lf",x,result);
    getch();

}
