#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int Number;
	
	/*Asking the user for a number to check*/
	printf("Please, enter an integer number: ");
	scanf("%d", &Number);
	
	/*Checking if it is odd or even*/
	if((Number & 1) == 1)
	{
		printf("The number is odd.\n");
	}
	else
	{
		printf("The number is even.\n");
	}
	
	/*Another way for checking*/
	/*if((Number % 2) == 1)
	{
		printf("The number is odd.\n");
	}
	else
	{
		printf("The number is even.\n");
	}*/
	
	/*Returning to the operating system*/
	return 0;
}