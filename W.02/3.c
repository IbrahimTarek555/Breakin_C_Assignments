#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int ID;
	
	/*Asking the user for the ID*/
	printf("Please, enter your ID: ");
	scanf("%d", &ID);
	
	/*Searching for the ID*/
	switch(ID)
	{
		case 1234: printf("Your name is: Harry.\n");
				   break;
		case 5678: printf("Your name is: Ron.\n");
				   break;
		case 1145: printf("Your name is: Hermione.\n");
				   break;
		default: printf("Wrong ID.\n");
	}
	
	/*Returning to the operating system*/
	return 0;
}