//Array copy all elements of an array to another array

#include<stdio.h>
int main()
{
    int array1[5]={10,20,30,40,50},array2[5],i;
    printf("Array1:");
    for(i=0;i<5;i++)
    {
        printf("%d ",array1[i]);
    }

    //Copying all the elements from array1 to array2

    for(i=0;i<5;i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2:");

    for(i=0;i<5;i++)
    {
        printf("%d ",array2[i]);
    }
    getch();

}
