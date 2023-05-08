#include <stdio.h>

int Get_Max(int Num1, int Num2, int *MaxNumber);

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int Num1, Num2, MaxNumber, State;
	
	/*Asking the user to enter two numbers*/
	printf("Please, enter the first number: ");
	scanf("%d", &Num1);

	printf("Please, enter the second number: ");
	scanf("%d", &Num2);

	/*Calling a function to return the maximum number*/
	State = Get_Max(Num1, Num2, &MaxNumber);
	
	/*Printing the Result to the user*/
	if(State == 0)
	{
		printf("Two numbers are with the same value.\n");
	}
	else
	{
		printf("The maximum number is: %d\n", MaxNumber);
	}
	
	/*Returning to the operating system*/
	return 0;
}

int Get_Max(int Num1, int Num2, int *MaxNumber)
{
	/*Defining Variables*/
	int State = 1;
	
	if(Num1 > Num2)
	{
		*MaxNumber = Num1;
	}
	else if(Num2 > Num1)
	{
		*MaxNumber = Num2;
	}
	else 
	{
		State = 0;
	}
	
	return State;
}