#include<stdio.h>
int main()
{
    int num1,num2,rem,Gcd,lcm,n1,n2;
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    Gcd = n1;
    lcm = (num1*num2)/Gcd;
    printf("%d\n",Gcd);
    printf("%d\n",lcm);
    return 0;
}
