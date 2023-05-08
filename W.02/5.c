#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int Num1, Num2, Num3;
	
	/*Scanning Numbers from the user*/
	printf("Please, enter your the first number: ");
	scanf("%d", &Num1);
	
	printf("Please, enter your the second number: ");
	scanf("%d", &Num2);

	printf("Please, enter your the third number: ");
	scanf("%d", &Num3);
	
	/*Searching for the maximum number*/
	/*Note: ternary is not prefered*/
	(Num1 > Num2)? (Num1 > Num3)? printf("The maximum number is: %d", Num1) : printf("The maximum number is: %d", Num3) : (Num2 > Num3)? printf("The maximum number is: %d", Num2) : printf("The maximum number is: %d", Num3);
	
	/*Returning to the operating system*/
	return 0;
}