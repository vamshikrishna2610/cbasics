#include<stdio.h>
void main()
{
	int a, b, c;
	a = 10,
	b = 4,
	c = 3,
	a += b; // 14, 4, 3
    a -= c; // 11, 4, 3
    c *= a; // 11, 4, 33
    a /= b; // 2, 4, 33
    b *= c; // 2, 132, 33
    a += b; // 134, 132, 33
	
	

	printf("%d %d %d", a, b, c);
}
