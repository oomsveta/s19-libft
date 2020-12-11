/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8_vec_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		u8_vec_resize(t_u8_vec *vec, size_t size)
{
	int delta;

	if (size == vec->capacity
		|| !(vec->content = lw_realloc(vec->content, vec->capacity, size)))
		return (0);
	delta = size - vec->capacity;
	vec->capacity = size;
	if (vec->capacity < vec->length)
		vec->length = vec->capacity;
	return (delta);
}
