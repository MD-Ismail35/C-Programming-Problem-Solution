#include <stdio.h>

int main() {

    float pi=3.14159, A,B,C,x,y,z,w,q;
    scanf("%f %f %f",&A,&B,&C);
    x = .5*A*C;
    y = pi*C*C;
    z = .5*(A+B)*C;
    w = B*B;
    q = A*B;
    printf("TRIANGULO: %.3f\n",x);
    printf("CIRCULO: %.3f\n",y);
    printf("TRAPEZIP: %.3f\n",z);
    printf("QUADRADO: %.3f\n",w);
    printf("RETANGULO: %.3f\n",q);


    return 0;
}
