#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    int k=0,ar=0,r=0,is=0,an=0,s=0,d=0,ism=0;
    for(i=0;i<30;i++)
    {
    printf("Kamal Via enter your lunch mill= ");
    scanf("%d",&a[0]);
    printf("Arju Via enter your lunch mill= ");
    scanf("%d",&a[1]);
    printf("Rashed Via enter your lunch mill= ");
    scanf("%d",&a[2]);
    printf("Iskandar Via enter your lunch mill= ");
    scanf("%d",&a[3]);
    printf("Anam Via enter your lunch mill= ");
    scanf("%d",&a[4]);
    printf("Shahin Via enter your lunch mill= ");
    scanf("%d",&a[5]);
    printf("Didar Via enter your lunch mill= ");
    scanf("%d",&a[6]);
    printf("Ismail enter your lunch mill= ");
    scanf("%d",&a[7]);

    printf("Kamal Via enter your denar mill= ");
    scanf("%d",&b[0]);
    printf("Arju Via enter your denar mill= ");
    scanf("%d",&b[1]);
    printf("Rashed Via enter your denar mill= ");
    scanf("%d",&b[2]);
    printf("Iskandar Via enter your denar mill= ");
    scanf("%d",&b[3]);
    printf("Anam Via enter your denar mill= ");
    scanf("%d",&b[4]);
    printf("Shahin Via enter your denar mill= ");
    scanf("%d",&b[5]);
    printf("Didar Via enter your denar mill= ");
    scanf("%d",&b[6]);
    printf("Ismail enter your denar mill= ");
    scanf("%d",&b[7]);
    k=k+a[0]+b[0];
    ar=ar+a[1]+b[1];
    r=r+a[2]+b[2];
    is=is+a[3]+b[3];
    an=an+a[4]+b[4];
    s=s+a[5]+b[5];
    d=d+a[6]+b[6];
    ism=ism+a[7]+b[7];
    }


    printf("Kamal Via total mill = %d\n\n",k);
    printf("Arju Via total mill = %d\n\n",ar);
    printf("Rashed Via total mill = %d\n\n",r);
    printf("Iskandar Via total mill = %d\n\n",is);
    printf("Anam Via total mill = %d\n\n",an);
    printf("Shahin Via total mill = %d\n\n",s);
    printf("Didar Via total mill = %d\n\n",d);
    printf("Ismail total mill = %d",ism);

    getch();

}
