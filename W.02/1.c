#include <stdio.h>

/*It is the main*/
int main()
{
	/*Defining Variables*/
	int WorkingHours, Salary;
	
	/*Asking the user for the working hours*/
	printf("Please, enter the working hours: ");
	scanf("%d", &WorkingHours);
	
	/*Calculating the total salary*/
	Salary = (WorkingHours * 50 );
	
	/*Checking the deduction*/
	if(WorkingHours < 40)
	{
		/*Note: Casting to int is a must, because of not, the subtraction result will be casted to float,
				and it will reduce the total result because of the way the memory memorize float numbers*/
		Salary = Salary - (int) (0.1 * Salary);
	}
	
	/*Printing the total salary to the user*/
	printf("The total salary is: %d\n", Salary);
	
	/*Returning to the operating system*/
	return 0;
}