/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Converts a string to an integer.
**
**	@param nptr	The string to convert.
**	@returns	The converted value.
*/

int ft_atoi(const char *nptr)
{
	t_u8	is_negative;
	int		ret;

	is_negative = 0;
	ret = 0;
	while (lw_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		*nptr++ == '-' && (is_negative = 1);
	while (ft_isdigit(*nptr))
		ret = ret * 10 + *nptr++ - '0';
	return (is_negative ? -ret : ret);
}
