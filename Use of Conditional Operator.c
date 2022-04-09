#include<stdio.h>
int main()
{
    while(1){
    int num1,num2,large;
    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    large=(num1>num2)?num1:num2;
    printf("Large number =%d\n",large);
    }
    getch();

}
