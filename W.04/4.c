#include <stdio.h>

/*
 * Assignment does not notice if the array has one repeated element or more than one,
 * I make two implementations for two cases.
 */

/*Functions' Prototype*/

/*
 * Function to find the repeated elements of an array,
 * store those elements inside another array,
 * tell the user the number of repeated elements.
 */
int FindRepeatElement(int Arr[], int Size, int RepeatArr[]);

/*Function to find the repeated element inside an array*/
int Repeated(int Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[20], ArraySize, i, RepeatArr[10], RepeatElementsNumber;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf(" %d", &Arr[i]);
	}
	
	/*Calculating array size*/
	ArraySize = sizeof(Arr)/sizeof(int);
	
	/*Calling a function to return repeated elements of an array*/
	RepeatElementsNumber = FindRepeatElement(Arr, ArraySize, RepeatArr);
	
	/*Printing the repeated elements*/
	printf("Repeted elements are: ");
	for(i = 0; i < RepeatElementsNumber; i++)
	{
		printf("%d\t", RepeatArr[i]);
	}
	
	/*If no repeated elements tell the user*/
	if(RepeatElementsNumber == 0)
	{
		printf("No Repeated Elements inside the array!");
	}
	
	/*Calling a function to repeat only one repeated element and print it*/
	int Repeatedelelement = Repeated(Arr, ArraySize);
	printf("\nRepeated element is: %d\n", Repeatedelelement);
	
	/*Returning to the operating system*/
	return 0;
}


/*Function Implementation*/
int FindRepeatElement(int Arr[], int Size, int RepeatArr[])
{
	/*Defining Variables*/
	int i, j, SearchArr[20], Counter = 0, Counter1 = 0, k;
	
	/*Passing over all elements of the array*/
	for(i = 0; i < Size; i++)
	{
		/*Comparing every element with the unique elements we already collected*/
		for(j = 0; j < Counter; j++)
		{
			/*If the The element exist before break the loop*/
			if(Arr[i] == SearchArr[j])
			{
				break;
			}		
		}		
		
		/*If we don't break the loop, means that the element doesn't exist before*/
		if(j == Counter)
		{
			/*Store it in another array to complete the rest of elements*/
			SearchArr[Counter] = Arr[i];
			Counter++;
		}
		/*If we break the loop, means that the element is repeated*/
		else if(j != Counter)
		{
			/*Search if the repeated element is repeated only once or not*/
			for(k = 0; k < Counter1; k++)
			{
				if(Arr[i] == RepeatArr[k])
				{
					break;
				}
			}
			
			/*If this element is repeated only once store it*/
			if(k == Counter1)
			{
				/*Store the repeated elements in array which is considered as the return to the user*/
				RepeatArr[Counter1] = Arr[i];
				Counter1++;
			}
		}
	}

	/*Returning number of repeated elements*/
	return Counter1;
}

/*Another implementation that finds out only one repeated element and returns it*/
int Repeated(int Arr[], int Size)
{
	int i, j, RepeatedNumber, Repeat;	
	
	/*Passing over all the array elements*/
	for(i = 0; i < Size; i++)
	{
		Repeat = 0;
		
		/*Search if the element is repeated*/
		for(j = 0; j < Size; j++)
		{
			if(Arr[j] == Arr[i])
			{
				Repeat++;
			}
			
			if(Repeat == 2)
			{
				RepeatedNumber = Arr[j];
				break;
			}
		}
		
		/*If the element is repeated break and return*/
		if(Repeat == 2)
		{
			break;
		}

	}
	
	/*Returning the repeated element*/
	return RepeatedNumber;
}
