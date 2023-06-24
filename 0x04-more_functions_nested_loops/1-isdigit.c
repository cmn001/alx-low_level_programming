#include "main.h"

/**
 * _isdigit - check if values are in the range 0-9
 * @c:char to be checked
 * Return:1 for  positive feedback or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '(')
		return (1);
	else
		return (0);
}
