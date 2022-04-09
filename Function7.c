#include<stdio.h>
int main()
{
    int num[]={10,20,30,40,50,90};
    int maximumvalue=maximum(num);
    printf("Maximum= %d\n",maximumvalue);

}
int maximum(int x[])
{
    int i;
    int max = x[0];
    for(i=1;i<=5;i++)
    {
        if(max<x[i])
            max=x[i];
    }
    return max;
}

