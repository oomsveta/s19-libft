/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lw_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*lw_strpbrk(const char *s, const char *accept)
{
	if (s)
		while (*s)
			if (ft_strchr(accept, *s++))
				return ((char *)--s);
	return (NULL);
}
