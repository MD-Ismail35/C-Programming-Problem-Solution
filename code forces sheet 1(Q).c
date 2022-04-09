#include<stdio.h>
int main()
{
   long long int A,B,C,D,e,rem,temp,s,r;
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
    e=A*B*C*D;
    temp=e;
    rem=temp%10;
    s=rem;
    temp=temp/10;
    rem=temp%10;
    r=rem;
    printf("%lld%lld\n",r,s);
    return 0;
}
