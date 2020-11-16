/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Appends the null-terminated string src to the end of dst.
**
**	@param dst	The destination string.
**	@param src	The source string.
**	@param size	The length of the string to create.
**	@returns	The length of the string it tried to create.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char *d;
	const char *s;
	size_t len;
	size_t n;

	d = dst;
	s = src;
	n = size;
	while (n-- && *d)
		d++;
	len = dst - d;
	if (!n--)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (n)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = 0;
	return (len + (src - s));
}
