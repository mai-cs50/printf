#include "main.h"
/**
 * init_params - params
 *
 * @params: p
 * @ap: va
 *
 * Rturn: void
*/
void init_params(va_list ap, params_t *params)
{
	params->unsign = 0;
	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;

	params->width = 0;
	params->precision = UNIT_MAX;
	params->h_modifier = 0;
	params->l_modifier = 0;
	(void)ap;
}
