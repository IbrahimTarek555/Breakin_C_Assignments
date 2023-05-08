#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int Num, TempNum, Factorial = 1;
	
	/*Scanning a number from the user*/
	printf("Please, enter an integer nubmer: ");
	scanf("%d", &Num);
		
	/*Create a copy of the number*/
	TempNum = Num;
	
	/*Validate the number*/
	if(Num < 0)
	{
		/*Do nothing*/
	}
	else
	{
		/*Calculating the factorial of the number*/
		while(TempNum != 0)
		{
			Factorial = Factorial * TempNum;
			TempNum--;
		}
	
		/*Printing the factorial*/
		printf("%d! = %d", Num, Factorial);		
	}
	
	/*Returning to the operating system*/
	return 0;
}