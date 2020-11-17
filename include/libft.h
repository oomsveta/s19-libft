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
** ARRAY
*/

void	lw_insrt_sort(int arr[], int len);

/*
**	IO
*/

void	ft_putstr(char const *s);

/*
**  STDLIB
*/

void	*ft_calloc(size_t nmemb, size_t size);

/*
**	STRING
*/

void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char    *ft_strchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
char	*lw_strcat(char *dest, const char *src);

/*
**	CTYPE
*/

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
t_u8	lw_isspace(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*
**	MATHS
*/

int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
t_u8	lw_isodd(int n);

#endif
