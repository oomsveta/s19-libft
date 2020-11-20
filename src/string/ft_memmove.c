/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copies n bytes from memory area src to memory area dest. The memory areas
**	may overlap: copying takes place as though the bytes in src are first
**	copied into a temporary array that does not overlap src or dest, and the
**	bytes are then copied from the temporary array to dest.
**
**	@param dest	The memory area to copy into.
**	@param src	The memory area to copy from.
**	@param n	The number of bytes to copy.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	t_u8		*d;
	const t_u8	*s;

	if (dest == src)
		return (dest);
	d = dest;
	s = src;
	if (s < d)
	{
		s += n;
		d += n;
		while (n--)
			*--d = *--s;
	}
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}
