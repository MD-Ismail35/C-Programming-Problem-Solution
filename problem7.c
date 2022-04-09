#include <stdio.h>

int main() {

   double M[12][12],b,a=0;
   int L,i,j;
   char T;
   scanf("%d",&L);
   scanf("%c",&T);
   for(i=0;i<12;i++)
   {
       for(j=0;j<12;j++)
       {
           scanf("%lf",&M[i][j]);
           if(L==i)
           {
               a=a+M[i][j];
           }

       }
   }
   if(T=='S')
   printf("%.1lf\n",a);
   else
   {
      b=(float)a/12.0;
   printf("%.1lf\n",b);
   }

    return 0;
}
