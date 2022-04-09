#include<stdio.h>
int main()
{
    int a[10],i,mill=0;
    float b[10],c[10],sum=0,avg;
    printf("Kamal Via total mill = ");
    scanf("%d",&a[0]);
    printf("Arju Via total mill = ");
    scanf("%d",&a[1]);
    printf("Rashed Via total mill = ");
    scanf("%d",&a[2]);
    printf("Iskandar Via total mill = ");
    scanf("%d",&a[3]);
    printf("Anam Via total mill = ");
    scanf("%d",&a[4]);
    printf("Shahin Via total mill = ");
    scanf("%d",&a[5]);
    printf("Didar Via total mill = ");
    scanf("%d",&a[6]);
    printf("Ismail total mill = ");
    scanf("%d",&a[7]);

    for(i=0;i<10;i++)
    {
      mill = mill+a[i];
    }
    printf("\nTotal Mill = %d\n",mill);
    printf("Kamal Via total Bazar cost = ");
    scanf("%f",&b[0]);
    printf("Arju Via total Bazar cost = ");
    scanf("%f",&b[1]);
    printf("Rashed Via total Bazar cost = ");
    scanf("%f",&b[2]);
    printf("Iskandar Via total Bazar cost = ");
    scanf("%f",&b[3]);
    printf("Anam Via total Bazar cost = ");
    scanf("%f",&b[4]);
    printf("Shahin Via total Bazar cost = ");
    scanf("%f",&b[5]);
    printf("Didar Via total Bazar cost = ");
    scanf("%f",&b[6]);
    printf("Ismail total Bazar cost = ");
    scanf("%f",&b[7]);

    for(i=0;i<10;i++)
    {
        sum = sum+b[i];
    }
    printf("\nTotal Bazar cost = %.2f Taka\n",sum);

    avg = sum/mill;
    printf("\nMill Rate = %.2f\n",avg);

    for(i=0;i<10;i++)
    {
        c[i] = avg*a[i];
    }
    printf("Kamal Via total mill cost = %.2f\n",c[0]);
    printf("Arju Via total mill cost = %.2f\n",c[1]);
    printf("Rashed Via total mill cost = %.2f\n",c[2]);
    printf("Iskandar Via total mill cost = %.2f\n",c[3]);
    printf("Anam Via total mill cost = %.2f\n",c[4]);
    printf("Shahin Via total mill cost = %.2f\n",c[5]);
    printf("Didar Via total mill cost = %.2f\n",c[6]);
    printf("Ismail total mill cost = %.2f\n",c[7]);

    getch();

}
