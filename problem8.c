
#include <stdio.h>

int main() {

   int L,Vi,i,a=0,b=0,c=0;
   while(scanf("%d",&L)!=EOF)
   {
       for(i=0;i<L;i++)
       {
           scanf("%d ",&Vi);
           if(Vi<10)
              a=1;
           else if(Vi>=10 && Vi<20)
              b=1;
           else if(Vi>=20)
               c=1;
       }
       if(c==1)
       printf("%d\n",c+2);
       else if(b==1)
       printf("%d\n",b+1);
       else
       printf("%d\n",a);
   }


    return 0;
}
