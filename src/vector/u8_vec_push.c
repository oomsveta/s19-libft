/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8_vec_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		u8_vec_push(t_u8_vec *vec, unsigned char c)
{
	if (vec->length + 1 > vec->capacity)
		if (!u8_vec_resize(vec, vec->capacity * 2))
			return (0);
	vec->content[vec->length++] = c;
	return (1);
}
