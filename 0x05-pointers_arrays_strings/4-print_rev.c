#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int myLen = strlen(s);
	int i = (myLen - 1);

	while (i >= 0)
	{
		_putchar(s[i]);
		i -= 1;
	}
	_putchar('\n');
}
