/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_streq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Tests if two strings are equivalent.
**
**	@param s1	A null-terminated string.
**	@param s2	A null-terminated string.
**	@returns	1 if both strings are equivalent, 0 otherwise
*/

t_u8	lw_streq(const char *s1, const char *s2)
{
	if (s1 == s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (*s1)
		if (*s1++ != *s2++)
			return (0);
	return (!*s2);
}
