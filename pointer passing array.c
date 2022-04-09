
#include<stdio.h>
int maximum(int *a,int n)
{
    int max =0,i;
    for(i=0;i<5;i++)
    {
        if(max<*a)
            max=*a;
        a++;
    }
    return max;
}
int main()
{
    int n=5;
    int a[5]={1,12,3,4,5};
    printf("The largest number is %d\n",maximum(a,n));
    return 0;
}
