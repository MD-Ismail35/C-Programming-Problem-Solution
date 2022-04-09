#include<stdio.h>
struct person
{
    char name[35];
    int age;
    float salary;
};
void display(struct person p)
{
    printf("\nName:%s\n",p.name);
    printf("Age:%d\n",p.age);
    printf("Salary:%f\n",p.salary);
}

int main()
{
    struct person person1,person2;
    strcpy(person1.name,"Anisul Islam");
    person1.age= 27;
    person1.salary= 12250.50;
    display(person1);


    strcpy(person2.name,"Ismail Hossain");
    person2.age= 19;
    person2.salary= 23842.876;
    display(person2);
    getch();
}
