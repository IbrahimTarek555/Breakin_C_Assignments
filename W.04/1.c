#include <stdio.h>

/*Functions' Prototype*/
/*
 * Function to sort the elements of an array,
 * This function follows: bubble sort with ascending order.
 */
void AscendingSort(int Arr[], int Size);


/*
 * Function to sort the elements of an array,
 * This function follows: selection sort with descending order.
 */
void DescendingSort(int Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[20], ArraySize, i, SortingType;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf(" %d", &Arr[i]);
	}
	
	/*Calculating array size*/
	ArraySize = sizeof(Arr)/sizeof(int);
	
	/*Asking the user to choose type of sorting*/
	printf("Note: for Ascending Sorting Enter 0, for Descending Sorting enter 1.\n");
	printf("Type of Sorting: ");
	scanf("%d", &SortingType);
	
	/*Calling a function to sort the array according to the sorting type*/
	switch(SortingType)
	{
		case 0: AscendingSort(Arr, ArraySize);	break;
		case 1: DescendingSort(Arr, ArraySize);	break;
		default: return 1;						break;
	}
			
	/*Printing the Array Elements after sorting*/
	for(i = 0; i < 20; i++)
	{
		printf("Arr[%d]: %d\n", (i + 1), Arr[i]);
	}
	
	return 0;
}


void AscendingSort(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, Temp, SortingDone;
	
	/*Passing over all Array elements*/
	for(i = (Size - 1); i > 0; i--)
	{
		/*Setting a flag to inform that the elements are already sorted or not*/
		SortingDone = 1;
		
		/*Passing over all Array elements after the element we already sort*/
		for(j = 0; j < i; j++)
		{
			/*Swapping if the first element is bigger than the second one*/
			if(Arr[j] > Arr[j + 1])
			{
				Temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = Temp;
				
				/*If there are swaps clear the flag, otherwise keep it up*/
				SortingDone = 0;
			}
		}
		
		if(SortingDone == 1)
		{
			break;
		}
	}
}

void DescendingSort(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, Temp, BiggestIndex;
	
	/*Passing over all Array elements*/
	for(i = 0; i < (Size - 1); i++)
	{
		/*Updating minimum index*/
		BiggestIndex = i;
		
		/*Passing over all Array elements after the element we already sort*/
		for(j = (i + 1); j < Size; j++)
		{
			/*Checking if the current element is smaller than the minimum index element*/
			if(Arr[j] > Arr[BiggestIndex])
			{
				/*Updating minimum index*/
				BiggestIndex = j;
			}
		}
		
		/*Checking if the element is already sorted*/
		if(BiggestIndex != i)
		{
			/*Swaping between minimum index and element that we sort*/
			Temp = Arr[i];
			Arr[i] = Arr[BiggestIndex];
			Arr[BiggestIndex] = Temp;
		}
	}
}
