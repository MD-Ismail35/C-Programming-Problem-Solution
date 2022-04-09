#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    file = fopen("test.txt","r");
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        while(!feof(file))
            {
            fgets(ch,39,file);
            printf("%s",ch);
            }
        fclose(file);
    }
    getch();

}
