#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp;
    printf("Enter any number:");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }

    printf("Sum of digits :%d",sum);
    getch();

}
