#include<stdio.h>
int main()
{
    double num1,num2;
    char Operator;

    printf("Enter an Operator(+,-,*,/) :");
    scanf("%c",&Operator);


    printf("Enter two numbers:");
    scanf("%lf %lf",&num1,&num2);

    switch(Operator)
    {
    case '+':
        {
            printf("%lf+%lf =%lf\n",num1,num2,num1+num2);
            break;
        }

        case '-':
        {
            printf("%lf-%lf =%lf\n",num1,num2,num1-num2);
            break;
        }

        case '*':
        {
            printf("%lf*%lf =%lf\n",num1,num2,num1*num2);
            break;
        }

        case '/':
        {
            printf("%lf/%lf =%lf\n",num1,num2,num1/num2);
            break;
        }

        default:
            printf("Not a valid Opreator");
    }

    getch();
}
