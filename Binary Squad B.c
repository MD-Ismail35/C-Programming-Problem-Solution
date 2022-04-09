
#include<stdio.h>
int main()
{
    int r1,c1,i,j,a[10][10],sum=0,T,k;
    scanf("%d",&T);
    for(k=1;k<=T;k++)
    {
        printf("Enter row number and coloum number for A matrix=  ");
    scanf("%d %d",&r1,&c1);

    printf("Input for A matrix= \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n\nA matrix= \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }

    printf(" Sum of diagonal elements of a matrix= %d",sum);
    }


}
