/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Locates the first occurrence of the null-terminated string 'needle' in the
**	string 'haystack', where not more than len characters are searched.
**
**  @param haystack	The string to search into.
**  @param needle	The string to search for.
**  @param len		The maximum number of characters to search.
**  @returns		If needle is empty, haystack; if needle occurs nowhere in
**					haystack, NULL; otherwise a pointer to the first character
**					of the first occurrence of needle.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char *)haystack);
	if (haystack)
		while (nlen <= len)
		{
			if (*haystack == *needle && !ft_strncmp(haystack, needle, nlen))
				return ((char *)haystack);
			haystack++;
			len--;
		}
	return (NULL);
}
