#include <stdio.h>

int main()
{
	float WithTax;
	float WithoutTax;
	
	printf("Enter an amount: ");
	scanf("%f", &WithoutTax);
	
	WithTax = WithoutTax + (0.05 * WithoutTax);
	
	printf("With tax added: $%.2f", WithTax);

	return 0;
}