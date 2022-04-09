#include<stdio.h>
int main()
{
    int row,col,n;
    scanf("%d",&n);
    for(row=1;row<=n-2;row++)
    {
        for(col=n;col>=row;col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    for(row=n-3;row>=1;row--)
    {
        for(col=n;col>=row;col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}
