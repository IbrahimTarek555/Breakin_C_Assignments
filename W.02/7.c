#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int Numbers[10], Sum = 0, i, Average;
	
	/*Scanning Numbers from the user*/
	for(i = 0; i < 10; i++)
	{
		printf("Please enter number %d: ", (i + 1));
		scanf("%d", &Numbers[i]);
	}
	
	/*Calculating the sum of the numbers*/
	for(i = 0; i < 10; i++)
	{
		Sum = Sum + Numbers[i];
	}
	
	/*Calculating the average of the numbers*/
	Average = Sum / 10;
	
	/*Printing the results*/
	printf("Summation of Numbers is: %d, \n", Sum);
	printf("And average is: %d", Average);
		
	/*Returning to the operating system*/
	return 0;
}