//1 X 2 X 3 X.....X n

#include<stdio.h>
int main()
{
    int i,n,result=1;
    printf("Enter n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result=result*i;
        if(i==1)
            printf("1*");
        else if(i==n)
            printf("%d",n);
        else
            printf("%d*",i);
    }
    printf("=%d",result);
    getch();

}
