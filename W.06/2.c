#include <stdio.h>

/*A function to check if string is mirror or not "SalaS","SalelaS"*/
int CheckMirror(char *String);

/*That is the main*/
int main(void)
{
	/*Define an integer number*/
	int State;
	char String[21] = {0};
	
	/*Scan the string from the user*/
	printf("Please enter a string then press enter(with max 20 characters):\n");
	scanf("%20[^\n]s", &String);
	
	/*Call a function to check if the string is mirror*/
	State = CheckMirror(String);
	
	/*Print the output*/
	if(State == 0)
	{
		printf("The string is not mirror");		
	}
	else if(State == 1)
	{
		printf("The string is mirror");
	}
	
	/*Return to the operating system*/
	return 0;
}

int CheckMirror(char *String)
{
	/*Define variables*/
	int Size = 0, i;
	int State = 1;
	
	/*Finding the size of the string*/
	while(String[Size] != '\0')
	{
		Size++;
	}
	
	/*Reverse the string*/
	for(i = 0; i < (((Size - 1)/2) + 1); i++)
	{
		if(String[i] != String[Size - 1 - i])
		{
			State = 0;
		}
	}
	
	/*Return State*/
	return State;
}
