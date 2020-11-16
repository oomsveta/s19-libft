/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	t_u8		*d_ptr;
	const t_u8	*s_ptr;
	t_u8		to_find;

	if (n)
	{
		d_ptr = dest;
		s_ptr = src;
		to_find = c;
		while (n--)
			if ((*d_ptr++ = *s_ptr++) == to_find)
				return (d_ptr);
	}
	return (NULL);
}
