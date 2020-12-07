/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	identity(unsigned int i, char x)
{
	(void)i;
	return (x);
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;

	if (!s)
		return (NULL);
	if (!f)
		f = &identity;
	len = ft_strlen(s);
	if (!(ret = malloc(len + 1)))
		return (NULL);
	ret[len] = '\0';
	while (len--)
		ret[len] = f(len, s[len]);
	return (ret);
}
