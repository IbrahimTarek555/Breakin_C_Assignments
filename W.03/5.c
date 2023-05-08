#include <stdio.h>

/*Function Prototype*/
void Fibonacci(int Size);

int main()
{
	/*Defining Variables*/
	int Size;
	
	/*Asking the user for the number of elements*/
	printf("Please, enter the number of elements you want in Fibonacci Series: ");
	scanf("%d", &Size);
	
	/*Calling a function to print the series until this number*/
	Fibonacci(Size);
  
	/*Returning to the operating system*/
	return 0;
}

void Fibonacci(int Size)
{
	/*Defining Variables*/
	int i, Num[3];
	
	/*Implementing Fibonacci series*/
	for(i = 0; i < Size; i++)
	{
		if(i <= 1)
		{
			Num[i] = i;
		}
		else
		{	
			Num[2] = Num[0] + Num[1];
			Num[0] = Num[1];
			Num[1] = Num[2];
		}
		
		if(i < 2)
		{
			printf("%d\t", Num[i]);
		}
		else 
		{
			printf("%d\t", Num[2]);
		}
	}

	

}