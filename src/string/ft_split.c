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

	if (!s)
		return (0);
	if (!*s)
		return (1);
	ret = 0;
	while (*s)
		if (*s++ != c)
		{
			while (*s++ != c)
				;
			ret++;
		}
	return (ret);
}

static void		*free_all(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char		**ret;
	const char	*start;
	int			i;
	size_t		len;

	len = count_words(s, c);
	if (!(ret = malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	ret[len] = NULL;
	i = 0;
	while (*s)
	{
		start = s;
		if (*s++ != c)
		{
			while (*s++ != c)
				;
			if (!(ret[i] = ft_substr(start, 0, s - start - 1)))
				return (free_all(ret, i));
			i++;
		}
	}
	return (ret);
}
