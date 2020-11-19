/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t ret;

	ret = 1;
	if (s)
		while (*s)
			if (*s++ == c)
				ret++;
	return (ret);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	len;
	int		i;
	int		j;

	len = count_words((const char *)s, c);
	if (!(ret = malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	ret[len] = NULL;
	i = ft_strlen(s);
	while ((j = i--) >= 0)
	{
		while (i >= 0 && s[i] != c)
			i--;
		ret[--len] = ft_substr(s, i + 1, j - i - 1);
	}
	return (ret);
}
