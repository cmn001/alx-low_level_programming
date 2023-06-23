#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int c;

	c = 0;

	while (c < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
				c++;
				}
				}
