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
# include <unistd.h>
# include <limits.h>

enum	e_fd { STDIN, STDOUT, STDERR };

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_u8_vec
{
	unsigned char	*content;
	size_t			length;
	size_t			capacity;
}				t_u8_vec;

/*
**	CTYPE
*/

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				lw_isspace(int c);
int				lw_isxdigit(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*
**	EXTRA
*/

char			*repeat(const char *str, int count);
const char		*skip_whitespaces(const char **ptr);
char			*trim(const char *s);
char			*trim_end(const char *s);
char			*trim_left(const char *s);

/*
**	LINKED_LIST
*/

void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *));
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);

/*
**	MATHS
*/

long int		min(long int a, long int b);

/*
**	STDIO
*/

void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr(char const *s);
void			ft_putstr_fd(char *s, int fd);

/*
**  STDLIB
*/

int				ft_atoi(const char *nptr);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_itoa(int n);
void			*lw_realloc(void *ptr, size_t current_size, size_t new_size);
long int		lw_strtol(const char *nptr, char **endptr, int base);

/*
**	STRING
*/

void			ft_bzero(void *s, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*nt_memfrob(void *s, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
char			*ft_strdup(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t			lw_strcspn(const char *s, const char *charset);
char			*lw_strpbrk(const char *s, const char *accept);
char			*ft_strrchr(const char *s, int c);
size_t			lw_strspn(const char *s, const char *accept);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*lw_strcat(char *dest, const char *src);

/*
**	VECTOR
*/

t_u8_vec		*u8_vec_new(size_t capacity);
int				u8_vec_push(t_u8_vec *vec, unsigned char c);
int				u8_vec_resize(t_u8_vec *vec, size_t size);

#endif
