
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct
{

    char name[20];
    char div[20];
    int salary;

} Employee;

int main()
{
    int i, j,n;
    scanf("%d",&n);
    Employee employees[n],temp;

    //Taking each employee detail as input

    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
    {

        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //
        printf("Division: ");
        scanf("%s",&employees[i].div);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);

        printf("\n");
    }
    for(i=0; i< n-1; i++)
    {
        for(j=i+1; j< n; j++)
        {
            if(employees[i].salary<employees[j].salary)
            {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }

            else if (employees[i].salary==employees[j].salary)
            {
                if(employees[i].name>employees[j].name)
                {
                    temp = employees[i];
                    employees[i] =employees[j];
                    employees[j] = temp;
                }
            }
        }
    }



    //Displaying Employee details

    printf("-------------- All Employees Details ---------------\n");

    for(i=0; i<n; i++)
    {

        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Id \t: ");
        printf("%s \n",employees[i].div);

        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);

        printf("\n");
    }

    return 0;

}
