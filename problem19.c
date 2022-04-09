#include<stdio.h>
int main()
{
    int a=271,sum=0,temp,rem;
    temp = a;
    while(temp--)
    {
        rem = temp%10;
        sum=sum+rem;
        temp=temp/10;

    }
    printf("Sum of %d = %d\n",a,sum);
}
