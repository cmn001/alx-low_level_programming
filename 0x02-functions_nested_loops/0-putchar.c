#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (success)
 */

int main(void)
{
	char *str = "_putchar";

	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
