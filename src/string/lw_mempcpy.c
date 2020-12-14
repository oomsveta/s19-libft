/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lw_mempcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*lw_mempcpy(void *dest, const void *src, size_t len)
{
	return (ft_memcpy(dest, src, len) + len);
}
