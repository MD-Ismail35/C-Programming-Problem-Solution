#include<stdio.h>
int main()
{
    int i,j,n,k,sum=0,num=0;
    scanf("%d",&n);
    int a[n],leftsum[n],rightsum[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        sum = sum+a[i];
        leftsum[i]=sum;
        num= num + a[j];
        rightsum[j] = num;

    }
    for(i=0;i<n;i++)
    {
        if(leftsum[i]==rightsum[i+1])
        {
            printf("%d\n",a[i+1]);
            break;
        }
    }
    return 0;
}
