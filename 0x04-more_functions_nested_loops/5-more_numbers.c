#include "main.h"


/**
 * more_numbers - print more numbers
 */


void more_numbers(void)
{
	int i, j;


	for (i = 0; i <= 14; i++)
	{
		if (j >= 10)
		{
			_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
