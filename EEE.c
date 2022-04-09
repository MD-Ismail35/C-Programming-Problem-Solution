#include<stdio.h>
 struct afif
 {
     char gf[10];
     int age;
     float salary;
 };
 int main()
 {
    struct afif person1,person2;
     person1.age=23;
    //scanf("%d",person1.age);
    person1.salary = 1238.47;
    person1.gf[10]="afifa";

    person2.age=26;
    person2.salary=337664.343;
    person2.gf[10]="afeya";

    printf("person1\n");
    printf("Age = %d\n",person1.age);

 }
