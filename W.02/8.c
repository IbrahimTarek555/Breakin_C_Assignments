#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int Num, i;
	
	/*Scanning a number from the user*/
	printf("Please, enter an integer nubmer: ");
	scanf("%d", &Num);
	
	/*Printing the multiplication taple of the number*/
	for(i = 1; i <= 12; i++)
	{
		printf("%d x %d = %d\n", i, Num, (Num * i));
	}
		
	/*Returning to the operating system*/
	return 0;
}