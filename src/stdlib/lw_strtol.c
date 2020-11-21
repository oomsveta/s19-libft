/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lw_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_i8		get_index_in_base(char d, int base, char *digits)
{
	char	*ptr;
	t_i8	index;

	ptr = ft_strchr(digits, d);
	index = ptr - digits;
	return (ptr && index < base ? index : -1);
}

void		check_base_literal(const char **nptr, int *base)
{
	if (**nptr != '0')
		return ;
	(*nptr)++;
	if ((**nptr | 32) == 'x')
	{
		if (*base == 16 || *base == 0)
		{
			*base = 16;
			(*nptr)++;
		}
	}
	else if (*base == 0)
		*base = 8;
}

long int	lw_strtol(const char *nptr, char **endptr, int base)
{
	long int	ret;
	t_i8		sign;
	t_i8		i;
	char		digits[37];

	ret = 0;
	sign = 1;
	ft_strlcpy(digits, "0123456789abcdefghijklmnopqrstuvwxyz", 37);
	skip_whitespaces(&nptr);
	if (*nptr == '-' || *nptr == '+')
		*nptr++ == '-' && (sign = -1);
	check_base_literal(&nptr, &base);
	if (base < 2 || base > 36)
		return (0);
	while (~(i = get_index_in_base(*nptr++, base, digits)))
		if ((ret = (ret * base) + i) < 0)
		{
			ret = (~sign ? LONG_MAX : LONG_MIN);
			break ;
		}
	if (endptr)
		*endptr = (char *)nptr;
	return (ret * sign);
}
