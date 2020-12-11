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

static int	get_index_in_base(char d, int base, const char *digits)
{
	char	*ptr;
	int		index;

	ptr = ft_strchr(digits, d | 0x20);
	index = ptr - digits;
	return (ptr && index < base ? index : -1);
}

static void	check_base_literal(const char **nptr, int *base)
{
	if (**nptr != '0')
		return ;
	(*nptr)++;
	if ((**nptr | 0x20) == 'x')
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
	long int	max;
	int			sign;
	int			i;
	const char	*digits;

	ret = 0;
	sign = 1;
	digits = "0123456789abcdefghijklmnopqrstuvwxyz";
	skip_whitespaces(&nptr);
	if (*nptr == '-' || *nptr == '+')
		*nptr++ == '-' && (sign = -1);
	check_base_literal(&nptr, &base);
	if (base < 2 || base > 36)
		return (0);
	max = LONG_MAX / base;
	while (~(i = get_index_in_base(*nptr++, base, digits)))
	{
		if (ret > max)
		{
			ret = (~sign ? LONG_MAX : LONG_MIN);
			break ;
		}
		ret = ret * base + i;
	}
	if (endptr)
		*endptr = (char *)nptr;
	return (ret * sign);
}
