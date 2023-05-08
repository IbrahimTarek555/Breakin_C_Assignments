#include <stdio.h>

/*It is the main*/
int main(void)
{
	/*Defining Variables*/
	int Num, Digits = 0, Temp;
	
	/*Asking the user to enter a number*/
	printf("Please, enter a number: ");
	scanf("%d", &Num);
	
	Temp = Num; 
	
	/*Calculting the number of digits*/
	while(Temp != 0)
	{
		Digits++;
		Temp = Temp / 10;
	}
	
	/*Printing the number of digits*/
	printf("Number of digits in %d is: %d", Num, Digits);
	
	/*Returning to the operating system*/
	return 0;
}
