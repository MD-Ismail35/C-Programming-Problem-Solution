#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch[50];
    ptr = fopen("Ripon.txt","r+");
    if(ptr==NULL)
        printf("File does not exist");
    else
    {
       // gets(ch);
        fprintf(ptr,"Ripon");
        fscanf(ptr,"%s",ch);
        printf("%s\n",ch);
        //fprintf(ptr,"Hello File 2");
        fclose(ptr);
    }
    return 0;
}
