#include<stdio.h>
int main()
{
    int a,b,i,j,f,d,x,e;
    scanf("%d",&a);
        x=a;
        f=1;
        while(x>0)
        {
            d=x%10;
            if(d!=4 && d!=7)
                f=0;
            x=x/10;
        }
        if(f==1)
            printf("%d ",a);

    return 0;

}
