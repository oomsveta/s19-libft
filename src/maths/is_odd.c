/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_odd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Tests if the provided number is odd.
**
**	@param n	An integer.
**	@returns	1 if the number is odd, otherwise 0.
*/

t_u8	is_odd(int n)
{
	return (n & 1);
}