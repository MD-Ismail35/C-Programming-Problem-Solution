#include<stdio.h>
int main()
{
    int T,N,a[110],i,j,mn,S;
    scanf("%d",&T);

   while(T--)
   {
       //mn=a[1]+a[2]+2-1;
       scanf("%d",&N);
       for(i=1;i<=N;i++)
       scanf("%d",&a[i]);
       mn=a[1]+a[2]+2-1;
       for(i=1;i<=N;i++)
       for(j=i+i;j<=N;j++)
       {
           S=a[i]+a[j]+j-i;
           if(S<mn)
           mn=S;
       }
       printf("%d\n",mn);
   }
   return 0;
}
