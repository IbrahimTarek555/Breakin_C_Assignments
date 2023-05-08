#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int Hieght, i, j, k;
	
	/*Scanning the hieght from the user*/
	printf("Please, enter the hieght of the pyramid: ");
	scanf("%d", &Hieght);
	
	/*Printing the pyramid*/
	for(i = 0; i < Hieght; i++)
	{
		for(j = 0; j < (Hieght - i - 1); j++)
		{
			printf(" ");
		}
		
		for(k = 0; k < ((i * 2) + 1); k++)
		{
			printf("*");
		}
		if(i != (Hieght - 1))
		{
			printf("\n");
		}
	}
	/*Returning to the operating system*/
	return 0;
}