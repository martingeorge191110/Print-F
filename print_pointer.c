#include "main.h"

/**
 * print_pointer - function to print pointer memory address
 * @ptr: list of arguments
 *
 * Return: (length)
 */

int print_pointer(va_list ptr)
{
	void *temp;
	unsigned long int number;
	int length = 0, i;
	char *str;

	temp = va_arg(ptr, void *);
	if (temp == NULL)
	{
		str = "(nil)";
		for (i = 0; str[i]; i++)
		{
			length += _putchar(str[i]);
		}
		return (length);
	}

	number = (unsigned long int)temp;
	length += _putchar('0');
	length += _putchar('x');
	length += print_hex_ptr(number);

	return (length);
}
