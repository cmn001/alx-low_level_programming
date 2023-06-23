#include "main.h"

/**
 * print_alphabet - just that
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= z; letter++)
		putchar(letter);

	putchar('\n');
}
