#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks :");
    scanf("%f",&marks);

    if(marks>=80)
        printf("Your result A+\n");

    else if(marks>=70)
        printf("Your result A\n");


    else if(marks>=60)
        printf("Your result A-\n");

    else if(marks>=50)
        printf("Your result B\n");

    else if(marks>=40)
        printf("Your result C\n");

   else if(marks>=33)
        printf("Your result D\n");

    else
        printf("Your result fail");

    getch();

}
