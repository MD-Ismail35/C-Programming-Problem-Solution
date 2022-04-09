#include<stdio.h>
int main()
{
  int t,n,ss,sp,i,a[110];
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&n);
      for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
      for(ss=1;ss<=n;ss++)
      {
          for(sp=1;sp+ss<=n+1;sp++)
          {
              for(i=sp;i<n;i++)
              {
                  printf("%d ",a[i]);
              }
               printf("\n");
          }

      }
  }
    return 0;
}
