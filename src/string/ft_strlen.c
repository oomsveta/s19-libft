/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Calculates the length of a null-terminated string.
**
**  @param s	A null-terminated string.
**  @returns	The number of bytes in the provided string, excluding the
**              terminating null byte.
*/

size_t	ft_strlen(const char *s)
{
	size_t ret;

	ret = 0;
	if (s)
		while (*s++)
			ret++;
	return (ret);
}
