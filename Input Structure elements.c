#include<stdio.h>
//global structure
struct person
{
    int age;
    float salary;
};
struct person person1,person2;   //global variable
int main()
{
    printf("Enter information for person1\n");
    printf("Enter Age: ");
    scanf("%d",&person1.age);
    printf("Enter Salary: ");
    scanf("%f",&person1.salary);

    printf("Person1:\n");
    printf("Age=%d\n",person1.age);
    printf("Salary=%f\n",person1.salary);


    printf("\n\nEnter information for person2\n");
    printf("Enter Age: ");
    scanf("%d",&person2.age);
    printf("Enter Salary: ");
    scanf("%f",&person2.salary);

    printf("Person1:\n");
    printf("Age=%d\n",person2.age);
    printf("Salary=%f\n",person2.salary);
    getch();
}
