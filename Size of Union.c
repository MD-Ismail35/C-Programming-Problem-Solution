#include<stdio.h>
union test1
{
    int x,y;
};
union test2
{
    char ch;
    int x;
};
union test3
{
    char name;
    double d;
};
struct test4
{
    int x;
    int Y;
    char name[20];
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Sizeof(t1)= %d\n",sizeof(t1));
    printf("Sizeof(t2)= %d\n",sizeof(t2));
    printf("Sizeof(t3)= %d\n",sizeof(t3));
    printf("Sizeof(t4)= %d\n",sizeof(t4));
    getch();
}
