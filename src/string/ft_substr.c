/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates and returns a substring from the string 's' beginning at index
**	'start' and of maximun size 'len'.
**
**	@param s		The string from which to create the substring.
**	@param start	The start index of the substring in the string 's'.
**	@param len		The maximum length of the substring.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*p;
	int		i;

	if (!(ret = malloc(len + 1)))
		return (NULL);
	p = (char *)s + start;
	i = 0;
	if (start < ft_strlen(s))
		while (*p && len--)
			ret[i++] = *p++;
	ret[i] = '\0';
	return (ret);
}
