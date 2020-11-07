/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Calculates the length of a null-terminated string.
**
**  @param str	A null-terminated string.
**  @returns	The number of bytes in the provided string, excluding the
**              terminating null byte.
*/

int	ft_strlen(char *str)
{
	int ret;

	ret = 0;
	if (str)
		while (*str++)
			ret++;
	return (ret);
}
