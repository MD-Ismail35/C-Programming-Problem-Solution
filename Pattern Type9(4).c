#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N=");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        //printing spaces
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        //printing alphabet
        for(col=1;col<=2*row-1;col++)
        {
            printf("%c",64+row);
        }
        printf("\n");
    }
    getch();

}
