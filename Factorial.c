#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("Enter any positive number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("%d!=%d",num,fact);
    getch();
}
