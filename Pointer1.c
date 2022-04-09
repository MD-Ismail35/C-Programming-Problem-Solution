#include<stdio.h>
int main()
{
    int x= 5;
    int y= 10;
    int *p;
    p= &x;

    printf("value of X= %d\n",x);
    printf("Address of X= %d\n",&x);
    printf("Address of P= %d\n",p);
    printf("Content of P= %d\n",*p);
    printf("Address of p variable= %d\n",&p);
    getch();
}

