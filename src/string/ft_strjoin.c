/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 2020/11/18 12:01:55 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	len;
	char	*ret;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	len = l1 + l2;
	if (!(ret = malloc(len + 1)))
		return (NULL);
	ret[len] = '\0';
	while (l2--)
		ret[--len] = s2[l2];
	while (l1--)
		ret[--len] = s1[l1];
	return (ret);
}
