#include <stdio.h>

/*Functions' Prototype*/

/*Function to search for the second biggest number of an array*/
int SecondLargestSearch(int Arr[], int Size, int *FoundOut);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[20], ArraySize, i, SecondBiggest, FoundOut;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf(" %d", &Arr[i]);
	}
	
	/*Calculating array size*/
	ArraySize = sizeof(Arr)/sizeof(int);
	
	/*Calling a function to find the second largest element on the array*/			
	SecondBiggest = SecondLargestSearch(Arr, ArraySize, &FoundOut);
	
	/*Printing the Element we find*/
	if(FoundOut == 1)
	{
		printf("The second biggest element of the array is: %d", SecondBiggest);		
	}
	else
	{
		printf("No second biggest number on the array");
	}	
	
	/*Returning to the operating system*/
	return 0;
}


/*Function Implemention*/
int SecondLargestSearch(int Arr[], int Size, int *FoundOut)
{
	/*Defining variables*/
	int i, j, Temp, BiggestIndex, SecondBiggest, ArrCopy[20];
	
	/*Copying the array to not corrupt the original one*/
	for(i = 0; i < Size; i++)
	{
		ArrCopy[i] = Arr[i];
	}
	
	/*Passing over all Array elements*/
	for(i = 0; i < (Size - 1); i++)
	{
		/*Updating minimum index*/
		BiggestIndex = i;
		
		/*Passing over all Array elements after the element we already sort*/
		for(j = (i + 1); j < Size; j++)
		{
			/*Checking if the current element is smaller than the minimum index element*/
			if(ArrCopy[j] > ArrCopy[BiggestIndex])
			{
				/*Updating minimum index*/
				BiggestIndex = j;
			}
		}
		
		/*Checking if the element is already sorted*/
		if(BiggestIndex != i)
		{
			/*Swaping between minimum index and element that we sort*/
			Temp = ArrCopy[i];
			ArrCopy[i] = ArrCopy[BiggestIndex];
			ArrCopy[BiggestIndex] = Temp;
		}
	}
	/*Then the copy array is sorted in descending order*/
	
	/*Search for an element smaller than the first one*/
	for(i = 1; i < Size; i++)
	{
		if(ArrCopy[i] < ArrCopy[0])
		{
			/*Tell the user that the element was found*/
			*FoundOut = 1;
			
			/*Return the element*/
			SecondBiggest = ArrCopy[i];
			break;
		}
		
	}
	
	/*Returning the second biggest element of the array, if not found the biggest one will be returned*/
	return SecondBiggest;
}
