/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_u8	is_in_set(char c, const char *set)
{
	if (set)
		while (*set)
			if (c == *set++)
				return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;

	if (!s1)
		return (NULL);
	start = (char *)s1;
	while (is_in_set(*start, set))
		start++;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (is_in_set(*end, set))
		end--;
	return (ft_substr(s1, start - s1, end - start + 1));
}
