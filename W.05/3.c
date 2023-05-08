#include <stdio.h>

/*Function to return the scalar multiplication of two arrays*/
int ScalarMuliplication(int *Arr1, int *Arr2, int ArraySize);

/*This is the main*/
int main()
{
	/*Defining 2 Arrays*/
	int Arr1[10], Arr2[10], ArraySize, i, ScalarResult;
	
	
	/*Scan array 1 values from the user*/
	printf("Please, enter values of the first array:\n");
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf(" %d", &Arr1[i]);
	}
	
	/*Scan array 2 values from the user*/
	printf("Please, enter values of the second array:\n");
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf(" %d", &Arr2[i]);
	}
	
	/*Calculating array size*/
	ArraySize = sizeof(Arr1)/sizeof(int);
	
	/*Calling the function to return the scalar multiplication result*/
	ScalarResult = ScalarMuliplication(Arr1, Arr2, ArraySize);
	
	/*Print the result to the user*/
	printf("The scalar multiplication result of 2 arrays is: %d", ScalarResult);
	
	/*Return to the operating system*/
	return 0;
}

/*Function Implementation*/
int ScalarMuliplication(int *Arr1, int *Arr2, int ArraySize)
{
	/*Define variables*/
	int Result = 0, i;
	
	/*Calculate the multiplication result*/
	for(i = 0; i < ArraySize; i++)
	{
		Result = Result + (Arr1[i] * Arr2[i]);
	}
	
	/*Return the result*/
	return Result;
}
