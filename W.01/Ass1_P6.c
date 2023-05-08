#include <stdio.h>

int main()
{
	int x, y, z;
	
	printf("Please, enter the first number: ");
	scanf("%d", &x);
	
	printf("Please, enter the second number: ");
	scanf("%d", &y);

	printf("Arithmatical Operations: \n");
	printf("x + y = %d\n", (x + y));
	printf("x - y = %d\n", (x - y));
	printf("x * y = %d\n", (x * y));
	printf("x / y = %d\n", (x / y));
	printf("x %% y = %d\n\n", (x % y));
	
	printf("Logical Operations: \n");
	printf("x || y = %d\n", (x || y));
	printf("x && y = %d\n", (x && y));
	printf("!x = %d\n", (!x));
	printf("!y = %d\n\n", (!y));
	
	
	printf("Bitwise Operations: \n");
	printf("x | y = %d\n", (x | y));
	printf("x & y = %d\n", (x & y));
	printf("x ^ y = %d\n", (x ^ y));
	printf("~x = %d\n", (~x));
	printf("~y = %d\n", (~y));
	printf("x >> 2 = %d\n", (x >> 2));
	printf("y << 2 = %d\n\n", (y << 2));




}