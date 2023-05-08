#include <stdio.h>

/*A function to reverse string "Ahmed salem"->melas demhA"*/
void ReverseString(char *String);

/*That is the main*/
int main(void)
{
	/*Define an integer number*/
	char String[21] = {0};
	
	/*Scan the string from the user*/
	printf("Please enter a string then press enter(with max 20 characters):\n");
	scanf("%20[^\n]s", &String);
	
	/*Call a function to reverse the string*/
	ReverseString(String);
	
	/*Print the output*/
	printf("Output: %s", String);
	
	/*Return to the operating system*/
	return 0;
}

void ReverseString(char *String)
{
	/*Define variables*/
	int Size = 0, i;
	char Temp;
	
	/*Finding the size of the string*/
	while(String[Size] != '\0')
	{
		Size++;
	}
	
	/*Reverse the string*/
	for(i = 0; i < (((Size - 1)/2) + 1); i++)
	{
		Temp = String[i];
		String[i] = String[Size - 1 - i];
		String[Size - 1 - i] = Temp;
	}
}
