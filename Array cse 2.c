#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0,j=0;j<n;i++,j++)
    {
        b[i]=a[j];
    }
    if(n%2!=0)
    {
        for(j=0,i=n-1;j<n/2;j++,i--)
   {
       printf("%d %d ",a[j],b[i]);

   }
   printf("%d",a[j]);
    }
    else
    {
        for(j=0,i=n-1;j<n/2;j++,i--)
   {
       printf("%d %d ",a[j],b[i]);

   }

    }
    return 0;



}
