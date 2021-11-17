#include<stdio.h>
void main ()
{
	int a,b,c,d,e;
	printf("Enter the ASCII values");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	printf("%c%c%c%c%c", a+64, b+64, c+64, d+64,e+64);
}
