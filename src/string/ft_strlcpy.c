/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copies up to size - 1 characters from the NUL-terminated string src to dst,
**	NUL-terminating the result.
**
**	@param dst		The string to copy to.
**	@param src		The string to copy from.
**	@param dstsize	The size of the destination buffer.
**	@returns		The total length of the string it tried to create.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*start;
	size_t		n;

	start = src;
	n = dstsize;
	if (n)
		while (--n)
			if (!(*dst++ = *src++))
				break ;
	if (!n)
	{
		if (dstsize)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - start - 1);
}
