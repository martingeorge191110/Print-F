#include "main.h"

/**
 * _printf - printing function to stdout
 * @format: constant string
 *
 * Return: (length) which is the size of format
 * otherwise - (-1)
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int length = 0, i, j;
	func_type types[] = { {'s', print_str},
		{'c', print_char}, {'%', print_percent}, {'d', print_digit},
		{'i', print_digit}, {'b', print_binary}, {'x', print_hexdecimal},
		{'X', print_HEXADECIMAL}, {'u', print_unsigned}, {'o', print_ocatal},
		{'p', print_pointer}, {'r', print_rev}, {'\0', NULL}
	};

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(ptr, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			length += _putchar(format[i]);
			continue;
		}
		for (j = 0; types[j].t != '\0'; j++)
		{
			if (format[i + 1] == types[j].t)
			{
				length += types[j].f(ptr);
				i++;
				break;
			}
		}
		if (types[j].t == '\0')
		{
			length += _putchar('%');
			if (format[i + 1] != '\0')
				length += _putchar(format[i + 1]), i++;
		}
	}
	va_end(ptr);
	return (length);
}
