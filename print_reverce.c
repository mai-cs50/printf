#include "main.h"

/**
 * print_rev_string - print a string in reverse
 * @list: arguments
 *
 * Return: lstr
 **/
int  print_rev_string(va_list list)
{
	int i, size;
	const char *str;

	str = va_arg(list, const char *);

	size = _strlen(str);

	for (i = size - 1; i >= 0; i--)
		_putchar(str[i]);

	return (size);
}
