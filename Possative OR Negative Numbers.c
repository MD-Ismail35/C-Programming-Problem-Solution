#include<stdio.h>
int main()
{
    float num;
    printf("Enter any number :");
    scanf("%f",&num);

    if (num>0)
        printf("The number is positive");

    else if (num<0)
        printf("The number is negative");

    else
         printf("The number is zero");
    getch();
}
