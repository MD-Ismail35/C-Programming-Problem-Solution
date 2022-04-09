#include<stdio.h>
union test
{
    int x,y;
};
int main()
{
    union test t1,t2;
    t1.x=10;
    printf("t1.x= %d\n",t1.x);
    printf("t1.y= %d\n",t1.y);

    t2.y=20;
    printf("t2.x= %d\n",t2.x);
    printf("t2.y= %d\n",t2.y);

    getch();

}
