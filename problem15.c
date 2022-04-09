
#include <stdio.h>

int main() {

   int C,len,i;
   char T[10001];
   scanf("%d",&C);
   for(i=0;i<C+1;i++)
   {
       gets(T);
       len=strlen(T);
       printf("0.%d\n",len);
   }

    return 0;
}
