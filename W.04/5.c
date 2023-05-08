#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[5][5], i, j;
	int RowSum[5] = {0}, ColumnSum[5] = {0};
	
	/*Scanning array values from the user*/
	for(i = 0; i < 5; i++)
	{
		printf("Array %d:\n", (i + 1));
		for(j = 0; j < 5; j++)
		{
			printf("Please, Enter Number %d: ", (j + 1));
			scanf(" %d", &Arr[i][j]);
		}		
	}
	
	/*Calculating the Summation of each row*/
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			RowSum[i] = RowSum[i] + Arr[i][j];
		}
	}
	
	/*Calculating the Summation of each column*/
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			ColumnSum[i] = ColumnSum[i] + Arr[j][i];
		}
	}
	
	/*Printing Results*/
	printf("Row Totals: ");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t", RowSum[i]);
	}
	
	printf("\nColumn Totals: ");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t", ColumnSum[i]);
	}


	/*Returning to the operating system*/
	return 0;
}


