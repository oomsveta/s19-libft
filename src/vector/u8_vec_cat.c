/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8_vec_cat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		u8_vec_cat(t_u8_vec *vec, char *str)
{
	if (str)
		while (*str)
		{
			if (vec->length + 1 > vec->capacity)
				if (!u8_vec_resize(vec, vec->capacity * 2))
					return (0);
			vec->content[vec->length++] = *str;
		}
	return (1);
}
