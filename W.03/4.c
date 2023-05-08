#include <stdio.h>

/*Function Prototype*/
int Login(char *Name, int Password);

/*It is the main*/
int main()
{
	/*Defining Variables*/
	char Name[10];
	int Password;
	int State;
	
	/*Asking the user for name and password*/
	printf("Login:\n");
	
	printf("Name: ");
	scanf("%9s", &Name);
	
	printf("Password: ");
	scanf("%d", &Password);
	
	/*Checking name and password*/
	State = Login(Name, Password);
	
	/*Printing the result*/
	if(State == 1)
	{
		printf("Successful Login\n");
	}
	else
	{
		printf("Unsuccessful Login\n");
	}
	
	/*Returning to the operating system*/
	return 0;
}

int Login(char Name[], int Password)
{
	/*Defining Variables*/
	char *UserName = "Ahmed";
	int UserPassword = 1234;
	int State = 1;
	int i, Length = 0;
	
	/*Counting the number of the name entered*/
	while(Name[Length] != '\0')
	{
		Length++;
	}
	
	/*Validating the Length*/
	if(Length != 5)
	{
		State = 0;
	}
	else
	{
		/*Validating the name*/	
		for(i = 0; i < Length; i++)
		{
			if(Name[i] != UserName[i])
			{
				State = 0;
				break;
			}
		}
	}
	
	/*Validating the password*/
	if(Password != UserPassword)
	{
		State = 0;
	}
	
	/*
	 * Returning State = 1 if passed,
	 * Returning State = 0 if not passed.
	 */
	return State;
}
