#include <stdio.h>

int main() {

   int N,i,X[7],Y[7],c=0,d=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d %d",&X[i],&Y[i]);
   }
   for(i=0;i<N;i++)
   {
       if(X[i]==Y[i])
       printf("%d\n",0);
       if(X[i]+1==Y[i])
       printf("%d\n",0);
       if(X[i]==Y[i]+1)
       printf("%d\n",0);

       if(X[i]>Y[i])
       {
           for(i=X[i]-1;i>Y[i];i--)
           {
               if(i%2!=0)
               {
                   c=c+i;
               }
           }
         printf("%d\n",c);
       }

       if(X[i]<Y[i])
       {
           for(i=Y[i]-1;i>X[i];i--)
           {
               if(i%2!=0)
               {
                   d=d+i;
               }
           }
         printf("%d\n",d);
       }


   }

   /*for(i=0;i<N;i++)
   {
    if(X[i]>Y[i])
       {
           for(i=X[i]-1;i>Y[i];i--)
           {
               if(i%2!=0)
               {
                   c=c+i;
               }
           }
         printf("%d\n",c);
       }

   }
   for(i=0;i<N;i++)
   {
       if(X[i]<Y[i])
       {
           for(i=Y[i]-1;i>X[i];i--)
           {
               if(i%2!=0)
               {
                   d=d+i;
               }
           }
         printf("%d\n",d);
       }

   }*/




    return 0;
}
