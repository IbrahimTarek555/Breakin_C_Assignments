#include <stdio.h>

/*
 * a C code to take string “hello,2,world,12” and print the first word number of
 * times as the first number ,and second word as the second number.
 */

/*This is the main*/
int main()
{
	/*Define variables*/
	char String[51];
	char PrintString[51];
	int i = 0, j = 0;
	int PrintCounter = 0;
	
	
	/*Scan string from the user*/
	printf("Enter a string(Max Char. 50): ");
	scanf("%50[^\n]s", String);

	/*Extract the first word*/
	while(String[i] != ',')
	{
		PrintString[j] = String[i];
		j++;
		i++;
	}
	
	PrintString[j] = '\0';
	i++;
		
	/*Extract the counter of the first word*/
	while(String[i] != ',')
	{
		PrintCounter = PrintCounter * 10;
		PrintCounter = PrintCounter + String[i] - '0';
		i++;
	}
		
	i++;

	/*Print the first word*/
	for(j = 0; j < PrintCounter; j++)
	{
		printf("%s\n", PrintString);
	}
		
	j = 0;
	PrintCounter = 0;
	printf("\n");
	
	/*Extract the second word*/
	while(String[i] != ',')
	{
		PrintString[j] = String[i];
		j++;
		i++;
	}
	
	PrintString[j] = '\0';
	i++;
	
	/*Extract the counter of the second word*/
	while(String[i] != '\0')
	{
		PrintCounter = PrintCounter * 10;
		PrintCounter = PrintCounter + String[i] - '0';
		i++;
	}
		
	i++;
	
	/*Print the second word*/
	for(j = 0; j < PrintCounter; j++)
	{
		printf("%s\n", PrintString);
	}
	
	return 0;
}