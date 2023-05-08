#include <stdio.h>

/*a program in C to find the most repeated character and the number of the Repetition in the string*/

/*This is the main*/
int main()
{
	/*Define variables*/
	char String[21];
	char Repeat[2][21] = {{0}, {0}};
	int i = 0, j, RepeatFlag, RepeatNumber = 0, BiggerIndex = 0;
	
	
	/*Scan string from the user*/
	printf("Enter a string(Max Char. 20): ");
	scanf("%20[^\n]s", String);
	
	/*Loop over the string*/
	while(String[i] != '\0')
	{
		RepeatFlag = 0;
		
		/*Search if the character existed before or not*/
		for(j = 0; j < RepeatNumber; j++)
		{
			if(String[i] == Repeat[0][j])
			{
				Repeat[1][j]++;
				RepeatFlag = 1;
			}
		}
		
		/*If the character didn't exist before put it into the repeat array and initialize its Repeat index by 1*/
		if(RepeatFlag == 0)
		{
			Repeat[0][j] = String[i];
			Repeat[1][j] = 1;
			RepeatNumber++;
		}
		
		i++;
	}
	
	/*Search the Repeat array for the most existance character*/
	for(i = 0; i < RepeatNumber; i++)
	{
		if(Repeat[1][i] > Repeat[1][BiggerIndex])
		{
			BiggerIndex = i;
		}
	}
	
	/*Print the output to the user*/
	printf("The most existance character is %c,\n", Repeat[0][BiggerIndex]);
	printf("with times of repeatition is %d.\n", Repeat[1][BiggerIndex]);
	
	return 0;
}