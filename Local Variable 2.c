#include<stdio.h>
int main()
{
    int a=10; //Here 'a' is a Local variable
    printf("Inside the main function a=%d\n",a);
    display();
}

void dispaly()
{
    printf("Inside the display function a=%d\n",a);

}
