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

int	ft_atoi(const char *nptr)
{
	t_i8	sign;
	t_i64	ret;

	sign = 1;
	ret = 0;
	skip_whitespaces(&nptr);
	if (*nptr == '-' || *nptr == '+')
		*nptr++ == '-' && (sign = -1);
	while (ft_isdigit(*nptr))
		if ((ret = ret * 10 + *nptr++ - '0') < 0)
			return (~sign ? -1 : 0);
	return (ret * sign);
}
