#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    long int N[T],rem,temp;
    for(i=1;i<=T;i++)
    {
        scanf("%ld",&N[i]);
        temp=N[i];
        if(temp==0)
            printf("0");
          while(temp!=0)
          {
              rem=temp%10;
              if(rem==0)
                printf("0 ");
              else
                printf("%ld ",rem);
              temp=temp/10;

          }
         printf("\n");
    }

    return 0;
}
