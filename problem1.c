#include <stdio.h>

int main() {

    float a,b,c,d,e;
    scanf("%f",&a);

    b=a-2000;
    c=b-1000;
    d=c-1500;
    e=d-500;

    if(a<=2000)
    {
        printf("Isento\n");
    }

    if(a>2000)
    {
      if(a>2000 && a<=3000)
      {
         b= (float)8/100*a;
      }
      if(a>3000 && a<=4500)
      {
          c=(float)18/100*a;
      }
      if(a>4500)
      {
          d=(float)28/100*a;
      }
    e = b+c+d;
    printf("R$ %.2f\n",e);
    }


    return 0;
}
