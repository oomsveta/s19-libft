/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	get_nbr_of_digits(unsigned int n)
{
	unsigned char i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char					*ft_itoa(int n)
{
	char			*ret;
	unsigned char	is_negative;
	unsigned char	len;
	unsigned int	un;

	is_negative = n < 0;
	un = is_negative ? -n : n;
	len = get_nbr_of_digits(un) + is_negative;
	if (!(ret = malloc(len + 1)))
		return (NULL);
	ret[len] = '\0';
	while (len--)
	{
		ret[len] = un % 10 + '0';
		un /= 10;
	}
	if (is_negative)
		ret[0] = '-';
	return (ret);
}
