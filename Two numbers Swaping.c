#include<stdio.h>
int main()
{
    int num1 =5;
    int num2 = 10;
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("num1 =%d",num1);
    printf("\nnum2 =%d",num2);


}
