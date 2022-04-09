#include<stdio.h>
int main()
{
    int i=6;
    anis:{      //Label

        printf("%d\t",i);
        i++;
        }

        if(i<5)
            goto anis;



}
