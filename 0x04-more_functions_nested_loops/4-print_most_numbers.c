#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - with exeption of 2 and 4
 * return: the numbers from 0 upto 9
 */

void print_most_numbers(void)
{
	int c = 0;

	for (; c <= '9'; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
	}
	}
	_putchar('\n');
}
