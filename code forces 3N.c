#include<stdio.h>
#include<string.h>
int main()
{
    char A[15],B[15],e,f,temp;
    int c,d;
    scanf("%s",A);
    scanf("%s",B);
    c=strlen(A);
    d=strlen(B);
    printf("%d %d\n",c,d);
   printf("%s\n",strcat(A,B));
     strcpy(temp,A[0]);
    strcpy(A,strcpy(A[0],B[0]));
     //strcpy(B[0],temp);
    printf("%s %s\n",A,B);
    return 0;

}
