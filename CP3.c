#include<stdio.h>
int main()
{
    int N,i,arr[1000];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=-1;
    for(i=0;i<N;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]==0)
            arr[i]=max;
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}
