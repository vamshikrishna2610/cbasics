#include<stdio.h>
void main()
{
	int a, b, c;
	printf("INPUT:\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("OUTPUT:\n");
	printf("%d %d %d\n", a += b, b, c);
	printf("%d %d %d\n", a -= c, b, c);
	printf("%d %d %d\n", a, b, c *= a);
	printf("%d %d %d\n", a /= b, b, c);
	printf("%d %d %d\n", a, b *= c, c);
	printf("%d %d %d\n", a += b, b, c);
	
	
	
	
}
