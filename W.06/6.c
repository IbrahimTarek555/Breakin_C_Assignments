#include <stdio.h>

/*a program in C to read a sentence and replace lowercase characters with uppercase and vice versa*/

/*This is the main*/
int main()
{
	/*Define variables*/
	char String[51];
	int i = 0;
	
	
	/*Scan string from the user*/
	printf("Enter a string(Max Char. 50): ");
	scanf("%50[^\n]s", String);

	/*Loop over the String*/
	while(String[i] != '\0')
	{
		if((String[i] >= 'a') && (String[i] <= 'z'))
		{
			String[i] = String[i] - 32;
		}
		else if((String[i] >= 'A') && (String[i] <= 'Z'))
		{
			String[i] = String[i] + 32;
		}
		else
		{
			/*Don't do anything*/
		}
		
		/*Increment the iterator*/
		i++;
	}
	
	/*Print the output*/
	printf("%s\n", String);
	
	/*Return to the operating system*/
	return 0;
}