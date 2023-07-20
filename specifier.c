#include "main.h"
/**
 * get_specifier - find formate
 *
 * @s: string
 *
 * Return: n of bytes
 *
 *
*/
int(*get_specifier(char *s))(va_list ap, params_t *params)
{
	specifier_t specifiers[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{"%", print_percent},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_address},
		{"S", print_s},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};
	int i = 0;
	while (specifiers[i].specifier)
	{
		if (*s == specifiers[i].specifier[0])
		{
			return specifiers[i].f;
		}
		i++;
	}
	return (NULL);
}
