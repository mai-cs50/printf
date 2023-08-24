#include "main.h"

/**
 * handle - format controller
 * @str: string
 * @list: arguments
 *
 * Return: arguments
 **/
int handle(const char *str, va_list list)
{
	int size, i, ad;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			ad = percent_handle(str, list, &i);
			if (ad == -1)
				return (-1);

			size += ad;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}


	return (size);
}

/**
 * percent_handle - Controller for percent format
 * @str: string
 * @list: arguments
 * @i: iterator
 *
 * Return: num
 **/
int percent_handle(const char *str, va_list list, int *i)
{
	int size, j, number_formats;
	format formats[] = {
		{'s', print_str}, {'c', print_char},
		{'d', print_int}, {'i', print_int},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hex},
		{'X', print_Hex}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
