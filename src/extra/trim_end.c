/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_end.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*trim_end(const char *s)
{
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - 1;
	while (lw_isspace(s[i]))
		i--;
	return (ft_substr(s, 0, i + 1));
}
