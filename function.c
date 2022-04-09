#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int maximumvalue = maximum(a,n);

    printf("Maximum = %d\n",maximumvalue);

}
int maximum(int a[],int n)
{
    int i;
    int max = a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}

