#include "main.h"

/**
 * print_str - print string from variadic function parameters
 * @ptr: list of parameters
 *
 * Return: (length) which is the size of the string
 */

int print_str(va_list ptr)
{
	int length, i;
	char *str;

	str = va_arg(ptr, char *);

	if (!str)
	{
		str = "(null)";
	}

	length = 0;
	for (i = 0; str[i]; i++)
	{
		length += _putchar(str[i]);
	}

	return (length);
}
