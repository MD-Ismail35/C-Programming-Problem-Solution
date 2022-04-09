#include<stdio.h>
main()
{
    int n,i,arr[100],temp;
    scanf("%d",&n);

   for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<=n;i++)
    {
        if(i%2==0&& arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }
        else if(i%2!=0 && arr[i]<arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }

    }

   for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
