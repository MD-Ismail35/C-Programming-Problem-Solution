#include<stdio.h>
int main()
{
    int num,sum=0,temp,rem;
    printf("Enter any number:");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=(sum*10)+rem;
        temp=temp/10;
    }
    if(num==sum)
        printf("Palindrome number=%d",sum);
    else
        printf("Not Palindrome");

}
