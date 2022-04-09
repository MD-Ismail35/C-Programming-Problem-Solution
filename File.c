#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch[50];
    ptr = fopen("Ripon.txt","w+");
    //T = fopen("Ripon.txt","r");
    if(ptr==NULL )
    {
        printf("File does not exist");
        return 1;
    }
    gets(ch);
    fprintf(ptr,"%s\n",ch);
    fclose(ptr);
    fscanf(ptr,"%[^\n]",ch);
        fclose(ptr);

    printf("%s",ch);

    return 0;
}

