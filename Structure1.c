#include<stdio.h>
//global structure
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;//local variable
    person1.age=26;
    person1.salary=6587.54;

    printf("Person1:\n");
    printf("Age=%d\n",person1.age);
    printf("Salary=%f\n",person1.salary);

    person2.age=34;
    person2.salary=7658.987;

    printf("\nPerson2:\n");
    printf("Age=%d\n",person2.age);
    printf("Salary=%f",person2.salary);
    getch();

}
