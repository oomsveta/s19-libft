/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Finds the last occurrence of the character 'c' in the string 's'.
**
**	@param s	The string to search into.
**	@param c	The character to search for.
**	@returns	A pointer to the matched character or NULL if the character is
**				not found. The terminating null byte is considered part of the
**				string, so that if c is specified as '\0', returns a pointer to
**				the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	char *ret;

	ret = NULL;
	while (*s)
	{
		if (*s == c)
			ret = (char *)s;
		s++;
	}
	return (c ? ret : (char *)s);
}
