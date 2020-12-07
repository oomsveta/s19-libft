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
**	Appends the null-terminated string src to the end of dst. It will append at
**	most size - strlen(dst) - 1 bytes, NUL-terminating the result.
**
**	@param dst	The destination string.
**	@param src	The source string.
**	@param size	The size of the dst buffer.
**	@returns	The initial length of dst plus the length of src.
*/


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*d;
	const char	*s;
	size_t		len;

	d = dst;
	s = src;
	size++;
	while (--size && *dst)
		dst++;
	len = dst - d;
	if (!size--)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (size)
		{
			*dst++ = *src;
			size--;
		}
		src++;
	}
	*dst = 0;
	return (len + (src - s));
}
