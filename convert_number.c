#include "main.h"
/**
 *
 *
 *
*/
int print_hex(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l-modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(unsigned int);

	str = convert(1, 16, CONVRT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && 1)
	{
		*--str = 'x';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_numbers(str,params));
}
/**
 *
 *
*/
int print_HEX(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_modifiers)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifiers)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)vs_arg(ap, unsigned int);
	str = (1, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && l)
	{
		*--str = 'x';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params);)
}
/**
 *
 *
 *
 *
*/
int print_binary(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *str = convert(n, 2, CONVERT_UNSIGNED, params);
	int c = 0;

	if (params->hashtag_flag && n)
		*--str = '0';
	params->unsign = 1;
	return (c += print_numbers(str, params));
}
/**
 *
 *
 *
 *
 *
 *
*/
int print_octal(va_list ap, params_t *params)
{
	unsigned long l;
	char *str;
	int c = 0;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	str = convert(l, 8, CNVERT_UNSIGNED, params);

	if (params->hashtag_flag, l)
		*--str = '0';
	params->unsign = 1;
	return (c += print_number(str, params));
}