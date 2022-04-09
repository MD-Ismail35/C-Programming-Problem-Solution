//Matrix Addition and Subtraction

#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOfColms;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number of rows and colms:");
    scanf("%d %d",&numberOfRows,&numberOfColms);

    //Scanning 'A' matrix
    printf("Enter elements for A matrix.\n");
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColms;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

     //Scanning 'B' matrix
    printf("Enter elements for B matrix.\n");
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColms;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //printing A matrix
    printf("A= ");
    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfColms;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n\n");
    }
    //printing B matrix
    printf("B= ");
    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfColms;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //Adding the matrix
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColms;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    //printing C matrix
    printf("\n A+B=   ");
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColms;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    getch();

}
