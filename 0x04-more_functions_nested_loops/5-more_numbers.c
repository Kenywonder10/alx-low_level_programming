#include <stdio.h>
#include "main.h"

/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/

void more_numbers(void)
{
	int a, b

		for (a = 0, a  < 10; a++)
		{
			for (b = 0; b <= 14; b++)
			{
				if (b > 9)
				{
					putchar((b / 10) + '0');
				}
				 putchar((b % 10) + '0');
			}
			putchar(10);
		}
}
