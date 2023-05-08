#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int Result;
	
	/*Scanning the result from the user*/
	printf("Please, enter your the result of: 3 x 4,\n");
	printf("Your result is: ");
	scanf("%d", &Result);
	
	/*Infinte loop until the user press the correct answer*/
	while(1)
	{
		/*Checking the answer*/
		if(Result == 12)
		{
			/*The result is correct, successful*/
			printf("Thanks.");
			break;
		}
		else
		{
			/*The result is wrong, try again*/
			printf("Try again: ");
			scanf("%d", &Result);
		}
	}
	
	/*Returning to the operating system*/
	return 0;
}