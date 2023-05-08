/*
 * x = 7 , y = 4
 * x = 0b00000111
 * y = 0b00000100
 * x | y = 0b00000111 = 7
 * x & y = 0b00000100 = 4
 * x ^ y = 0b00000011 = 3
 * x << 1 = 0b00001110 = 14
 * x >> 2 = 0b00000001 = 1
 */

#include <stdio.h>

int main()
{
	char x = 7;
	char y = 4;
	
	printf("x | y = %d\n", (x | y));
	
	printf("x & y = %d\n", (x & y));

	printf("x ^ y = %d\n", (x ^ y));

	printf("x << 1 = %d\n", (x << 1));

	printf("x >> 2 = %d\n", (x >> 2));

	return 0;
}
