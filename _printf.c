#include "main.h"

/**
 * _printf - Function to print any value
 * @format: string format
 *
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	/*check*/

	if (format == NULL)
		return (-1);

	/*calculate*/

	count = _strlen(format);
	if (count <= 0)
		return (0);

	/*initialize*/

	va_start(args, format);

	/*procces*/

	count = handle(format, args);

	/*output*/

	_putchar(-1);

	/*ensure*/

	va_end(args);

	return (count);
}
