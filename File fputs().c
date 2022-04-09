#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];

    file = fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name:");
        gets(name);
        fputs(name,file);
        fputs("\n",file);
        printf("File is written successfully\n");
        fclose(file);
    }
    getch();

}
