#include <stdio.h>

/*Function to return the summation of two variables which passed by address*/
int Summation(int *Num1, int *Num2);

int main()
{
	/*Define 2 variables*/
	int Num1, Num2;
	/*Define Sum Variable*/
	int Sum;
	
	/*Ask the user for these numbers' values*/
	printf("Please, enter the first number: ");
	scanf("%d", &Num1);
	printf("Please, enter the second number: ");
	scanf("%d", &Num2);
	
	/*Calculate the sum by a function*/
	Sum = Summation(&Num1, &Num2);
	
	/*Print the sum to the user*/
	printf("The summation is: %d\n", Sum);
		
	/*Returning to the operating system*/
	return 0;
}

/*Function Implementation*/
int Summation(int *Num1, int *Num2)
{
	/*Define a variable and put the summation on it*/
	int Sum = (*Num1) + (*Num2);
	
	/*Return the summation*/
	return Sum;
}