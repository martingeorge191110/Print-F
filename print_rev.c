#include "main.h"

/**
 * print_rev - print string reversed
 * @ptr: list of arguments
 *
 * Return: (length)
 */

int print_rev(va_list ptr)
{
	char *str = va_arg(ptr, char *);
	int i;
	int length = 0;

	if (str == NULL)
		str = "(null)";

	while (str[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(str[i]);

	return (length);
}
