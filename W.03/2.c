#include <stdio.h>

/*Function Prototype*/
void SwapTwoGlobal(void);

/*Defining variables*/
int Num1, Num2;

/*It is the main*/
int main(void)
{
	/*Asking the user to enter two numbers*/
	printf("Please, enter the first number: ");
	scanf("%d", &Num1);

	printf("Please, enter the second number: ");
	scanf("%d", &Num2);

	/*Calling a function to swap the two variables*/
	SwapTwoGlobal();
	
	/*Printing the two numbers after swapping*/
	printf("The first number is: %d.\n", Num1);
	printf("The second number is: %d.\n", Num2);
	
	/*Returning to the operating system*/
	return 0;
}

void SwapTwoGlobal(void)
{
	/*Swapping the two variables*/
	Num1 = Num1 + Num2;
	Num2 = Num1 - Num2;
	Num1 = Num1 - Num2;
}
