#include<stdio.h>
enum days_of_week
{
    Sun,Mon,The,Wed,Thu,Fri,Sat
};
int main()
{
    enum days_of_week day1,day2;
    day1= Sun;
    printf("day1= %d\n",day1);
    getch();
}
