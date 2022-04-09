#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    sum = num1+num2;

    avg=(float)sum/2;
    printf("\nThe average is = %f",avg);
    getch();
}
