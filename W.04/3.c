#include <stdio.h>

/*Functions' Prototype*/

/*Function to print unique elements of an unsorted array*/
void PrintUniqueElements(int Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[20], ArraySize, i;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf(" %d", &Arr[i]);
	}
	
	/*Calculating array size*/
	ArraySize = sizeof(Arr)/sizeof(int);
	
	/*Calling a function to print unique elements of an array*/
	PrintUniqueElements(Arr, ArraySize);
			
	/*Returning to the operating system*/
	return 0;
}


/*Function Implementation*/
void PrintUniqueElements(int Arr[], int Size)
{
	/*Defining Variables*/
	int i, j, SearchArr[20], Counter = 0;
	
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
			/*Print that element, store it in another array to complete the rest of elements*/
			printf("%d\t", Arr[i]);
			SearchArr[Counter] = Arr[i];
			Counter++;
		}
	}

}