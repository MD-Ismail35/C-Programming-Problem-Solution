#include<stdio.h>
#define pi 3.14159
int main()
{
    double R, area;

    scanf("%lf",&R);
    area=pi*R*R;
    printf("A=%.4lf",area);
    return 0;

}
