#include <stdio.h>

/*A function to convert float number to string with accuracy 4 digits after point*/
void FloatToString(float Number, char *String);

/*That is the main*/
int main(void)
{
	/*Define an integer number*/
	float FloatNumber;
	char String[20];
	
	/*Scan the float number from the user*/
	printf("Float Number (with Accuracy 4 digits after point): ");
	scanf("%f", &FloatNumber);
	
	/*Call a function to convert float to string*/
	FloatToString(FloatNumber, String);
	
	/*Print the string to the user*/
	printf("OUTPUT: %s", String);
	
	/*Return to the operating system*/
	return 0;
}

void FloatToString(float FloatNumber, char *String)
{
	/*Define variables*/
	int IntNumber = (int) FloatNumber;
	int i = 0, j, Temp;
	
	/*Afterpoint Number*/
	FloatNumber = FloatNumber - (float) IntNumber;
	
	/*Extract the integer part*/
	if(IntNumber == 0)
	{
		String[i] = '0';
		i++;
	}
	else
	{
		while(IntNumber != 0)
		{
			String[i] = IntNumber % 10 + '0';
			IntNumber = IntNumber / 10;
			i++;
		}	
	}

	/*Reverse the integer part*/
	for(j = 0; j < i / 2; j++)
	{
		Temp = String[j];
		String[j] = String[i - 1 - j];
		String[i - 1 - j] = Temp;
	}
	
	/*Extract Afterpoint part*/
	String[i] = '.';
	for(j = 0; j < 4; j++)
	{
		i++;
		FloatNumber = FloatNumber * 10;
		IntNumber = (int) FloatNumber;
		String[i] = IntNumber + '0';
		FloatNumber = FloatNumber - (float) IntNumber;
	}
	
	/*Store the null character to terminate the string*/
	i++;
	String[i] = '\0';
}



