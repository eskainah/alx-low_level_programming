#include <stdio.h>                                                                                                                                     

/**
*main-Entry Point
*Return: 0                                                                  
*/                                                                                                                                                     

int main(void)
{
	int number;
	
	for (number = 24; number <= 30; number++)
	{
		putchar(number);

		if (number == 30)
		{
			break;
		}

		putchar(',');

		putchar(' ');
	
	}

	putchar('\n');
	
	return (0);	
}
   
