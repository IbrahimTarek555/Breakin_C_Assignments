#include <stdio.h>

int main()
{
	/*Define an integer number*/
	int Num = 10;
	
	/*Print the number*/
	printf("%d\n", Num);
	
	/*Define a pointer that points to that number*/
	int *NumPtr = &Num;
	
	/*Change the value of that number*/
	*NumPtr = 20;
	
	/*Print that number again*/
	printf("%d\n", Num);
	
	/*Returning to the operating system*/
	return 0;
}

