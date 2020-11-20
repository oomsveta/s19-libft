/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Compares the two strings s1 and s2. The locale is not taken into account.
**	The comparison is done using unsigned characters.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char c1;
	unsigned char c2;

	while (n--)
	{
		c1 = (unsigned)*s1;
		c2 = (unsigned)*s2;
		if (c1 != c2)
			return (c1 - c2);
		s2++;
		if (!*s1++)
			break ;
	}
	return (0);
}
