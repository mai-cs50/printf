#include "main.h"

/**
 * _printf - Function to print any value
 * @format: string format
 *
 * Return: the number of characters printed
*/
int _printf(const char *format,...)
{
	int count;
	va_list args;

	if (format == NULL)
		return (-1);

	count = _strlen(format);
	if (count <= 0)
		return (0);

	va_start(args, format);
	count = handle(format, args);

	_putchar(-1);
	va_end(args);

	return (count);
}
