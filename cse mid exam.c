#include<stdio.h>
int main() {
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>40 && b>40 && c>40 && d>40)
	printf("pass\n");
	else
	printf("fail");
	if(a>b && b>c && c>d)
	printf("%d",d);
	else	if(d>c && c>b && b>a)
	printf("%d",a);
	else	if(b>a && a>d && d>c)
	printf("%d",c);
	else 	if(a>c && c>d && d>b)
	printf("%d",b);
	return 0;
}
