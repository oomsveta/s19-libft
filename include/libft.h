/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef char				t_i8;
typedef unsigned char		t_u8;
typedef short int			t_i16;
typedef unsigned short int	t_u16;
typedef int					t_i32;
typedef unsigned int		t_u32;

/*
**	IO
*/

void	ft_putstr(char const *s);

/*
**	STRING
*/

size_t	ft_strlen(const char *s);

/*
**	CTYPE
*/

int		ft_isspace(int c);
int		ft_isdigit(int c);

/*
**	MATHS
*/

int		ft_atoi(const char *nptr);
t_u8	ft_isodd(int n);

#endif
