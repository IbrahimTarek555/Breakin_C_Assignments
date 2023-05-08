#include <stdio.h>

/*It is the main*/
int main1()
{
	int i = 0, Num1 = 0, Num2 = 1, Num3 = 1, Size, Num4;
	
	printf("Please, enter the number of elements you want in Tirbonacci Series: ");
	scanf("%d", &Size);
	
	
	switch(Size)
	{
		case 1: printf("0");
				break;
		case 2: printf("0\t1");
				break;
		case 3: printf("0\t1\t1");
				break;
		default:
			printf("0\t1\t1\t");
			for(i = 3; i < Size; i++)
			{
				Num4 = Num1 + Num2 + Num3;
				Num1 = Num2;
				Num2 = Num3;
				Num3 = Num4;
				printf("%d\t", Num4);
			}
		
	}
	
	/*Returning to the operating system*/
	return 0;
}

/*Another solution*/
int main()
{
	int i, Size, Num[4];
	
	printf("Please, enter the number of elements you want in Tirbonacci Series: ");
	scanf("%d", &Size);
	
	for(i = 0; i < Size; i++)
	{
		if(i < 2)
		{
			Num[i] = i;
		}
		else if(i == 2)
		{
			Num[i] = 1;
		}
		else
		{
			Num[3] = Num[0] + Num[1] + Num[2];
			Num[0] = Num[1];
			Num[1] = Num[2];
			Num[2] = Num[3];
		}
		if(i < 3)
		{
			printf("%d\t", Num[i]);
		}
		else 
		{
			printf("%d\t", Num[3]);
		}
	}

}