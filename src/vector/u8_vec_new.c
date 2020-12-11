/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8_vec_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_u8_vec	*u8_vec_new(size_t capacity)
{
	t_u8_vec		*ret;
	unsigned char	*content;

	if (!(ret = malloc(sizeof(t_u8_vec))))
		return (NULL);
	if (!(content = malloc(capacity)))
	{
		free(ret);
		return (NULL);
	}
	ret->capacity = capacity;
	ret->length = 0;
	ret->content = content;
	return (ret);
}
