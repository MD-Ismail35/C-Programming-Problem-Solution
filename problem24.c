#include <stdio.h>

int main() {
 int N,a[N],i,sum=0,b=0,c=0,d=0;
 float e,f,g;
 char ch[N];
 scanf("%d",&N);
 for(i=1;i<=N;i++)
 {
     scanf("%d %c",&a[i],&ch[i]);
     sum=sum+a[i];
     if(ch[i]=='C')
     b=b+a[i];
     else if(ch[i]=='R')
     c=c+a[i];
     else
     d=d+a[i];
 }
 e= ((float)b/sum)*100;
 f= ((float)c/sum)*100;
 g= ((float)d/sum)*100;
 printf("Total: %d cobaias\n",sum);
 printf("Total de coelhos: %d\n",b);
 printf("Total de ratos: %d\n",c);
 printf("Total de sapos: %d\n",d);
 printf("Percentual de coelhos: %.2f %\n",e);
 printf("Percentual de ratos: %.2f %\n",f);
 printf("Percentual de sapos: %.2f %\n",g);

    return 0;
}
