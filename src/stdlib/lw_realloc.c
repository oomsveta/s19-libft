/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lw_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*lw_realloc(void *ptr, size_t current_size, size_t new_size)
{
	void *ret;

	if (!(ret = malloc(new_size)))
		return (NULL);
	ft_memcpy(ret, ptr, min(current_size, new_size));
	free(ptr);
	return (ret);
}
