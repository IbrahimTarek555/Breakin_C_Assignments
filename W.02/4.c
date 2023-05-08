#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int Grade;
	
	/*Asking the user for the grade*/
	printf("Please, enter your grade: ");
	scanf("%d", &Grade);
	
	/*Checking the rating of the user grade*/
	if(Grade < 0)
	{
		printf("Enter real grade.\n");
	}
	else if(Grade < 50)
	{
		printf("Rating: Fall.\n");
	}
	else if(Grade < 65)
	{
		printf("Rating: Passed.\n");
	}
	else if(Grade < 75)
	{
		printf("Rating: Good.\n");
	}
	else if(Grade < 85)
	{
		printf("Rating: Very Good.\n");
	}
	else if(Grade <= 100)
	{
		printf("Rating: Excellent.\n");
	}
	else
	{
		printf("Enter real grade.\n");
	}
	
	/*Returning to the operating system*/
	return 0;
}