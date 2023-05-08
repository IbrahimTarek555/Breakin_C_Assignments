#include <stdio.h>


/*This is the main*/
int main()
{
	/*Define 3 integers*/
	int x, y, z;
	
	/*Define 3 pointers to integer*/
	int *px, *py, *pz;
	
	/*Set values to the 3 variables*/
	x = 10;
	y = 20;
	z = 30;
	
	/*Assign the pointers to the variables*/
	px = &x;
	py = &y;
	pz = &z;
	
	/*Requirement A*/
	printf("x is: %d\n", x);
	printf("y is: %d\n", y);
	printf("z is: %d\n", z);
	
	printf("\npx is: %d\n", px);
	printf("py is: %d\n", py);
	printf("pz is: %d\n", pz);

	printf("\n*px is: %d\n", *px);
	printf("*py is: %d\n", *py);
	printf("*pz is: %d\n", *pz);

	/*Print a swapping message*/
	printf("\nSwapping pointers:\n");
	
	
	/*Swap Code*/
	pz = px;
	px = py;
	py = pz;
	
	/*Requirement D*/
	printf("x is: %d\n", x);
	printf("y is: %d\n", y);
	printf("z is: %d\n", z);
	
	printf("\npx is: %d\n", px);
	printf("py is: %d\n", py);
	printf("pz is: %d\n", pz);

	printf("\n*px is: %d\n", *px);
	printf("*py is: %d\n", *py);
	printf("*pz is: %d\n", *pz);

	
	return 0;
}
	

