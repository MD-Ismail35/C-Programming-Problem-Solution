#include<stdio.h>
int main()
{
    int x;
    double result;
    printf("Enter any numbers =");
    scanf("%d",&x);
    result = log(x);
    printf("log%d = %lf",x,result);
    getch();



}
