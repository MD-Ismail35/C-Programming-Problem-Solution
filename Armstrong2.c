#include<stdio.h>
int main()
{
    int initialNum,finalNum,temp,rem,sum=0,i;
    printf("Enter initial value:");
    scanf("%d",&initialNum);

    printf("Enter final value:");
    scanf("%d",&finalNum);

    for(i=initialNum; i<=finalNum; i++)
    {
        temp=i;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }
        if(sum==i)
            printf("%d\n",i);
        sum=0;
    }
    getch();
}
