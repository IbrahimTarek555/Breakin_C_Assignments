#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int ID, Password, i;
	
	/*Note to the user*/
	printf("ID and Password are: 1234\n");
	
	/*Scanning the ID from the user*/
	printf("Please, enter your ID: ");
	scanf("%d", &ID);
	
	/*Validating the ID*/
	if(ID == 1234)
	{
		/*Scanning the Password from the user*/
		printf("Please, enter the password: ");
		scanf("%d", &Password);
	
		/*Checking the password*/
		if(Password == 1234)
		{
			printf("Welcome to the system.\n");
		}
		/*There are more 2 tries*/
		else
		{
			for(i = 2; i >= 0; i--)
			{
				if(Password == 1234)
				{
					printf("Welcome to the system.\n");
					break;
				}
				if(i > 0)
				{
					printf("%d Tries,", i);
					printf("Try again: ");
					scanf("%d", &Password);

				}
				else
				{
					printf("No more tries.\nYou are not registered.\n");
				}
				
			}
		}
	}
	else
	{
		printf("Wrong ID!\n");
	}
	
	/*Returning to the operating system*/
	return 0;
}