#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: parameter
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int myLen = strlen(s);
	int i = (myLen - 1);

	while (s[index++])
	{
		_putchar(s[i]);
		i -= 1;
	}
	_putchar('\n');
}
