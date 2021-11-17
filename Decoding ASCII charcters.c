//Decode ASCII charcters
//Take input cat and get output as 4,2,21 
#include<stdio.h>
void main()
{
	char a, b, c;
	printf("Enter three charcters");
	scanf("%c%c%c", &a, &b, &c);
	printf("Output is %d, %d, %d",a-95,b-95,c-95);
}
