#include<stdio.h>
int main()
{
    int N,count=0;
    scanf("%d",&N);
    int a[N],X,i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&X);
    for(i=1;i<N;i++)
    {
        if(a[i]==X)
        {
            count++;
            break;
        }
    }
    if(a[0]==X)
        printf("0\n");
   else if(count==0)
    printf("-1\n");
    else
    printf("1\n");

}
