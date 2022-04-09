#include<stdio.h>
//global structure
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1={24,5647.987};
    struct person person2,person3;

    //element wise assignment
    person2.age=25;
    person2.salary=767544.354;

    //structure variable assignment
    person3=person2;

    printf("Person1:\n");
    printf("Age=%d\n",person1.age);
    printf("Salary=%f\n",person1.salary);

    printf("\nPerson2:\n");
    printf("Age=%d\n",person2.age);
    printf("Salary=%f\n",person2.salary);

    printf("\nPerson3:\n");
    printf("Age=%d\n",person3.age);
    printf("Salary=%f\n",person3.salary);

    getch();


}
