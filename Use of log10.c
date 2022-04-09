#include<stdio.h>
#include<math.h>
int  main()
{
    int x;
    printf("Enter any numbers :");
    scanf("%d",&x);
    double result = log10(x);
    printf("log10(%d) = %lf",x,result);
    getch();


}
