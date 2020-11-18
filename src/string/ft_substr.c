/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 2020/11/18 11:31:56 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*p;
	int 	i;

	if (start > ft_strlen(s))
		return (NULL);
	p = (char *)s + start;
	if (!(ret = malloc(len + 1)))
		return (NULL);
	i = 0;
	while (*p && len--)
		ret[i++] = *p++;
	ret[i] = '\0';
	return (ret);
}
