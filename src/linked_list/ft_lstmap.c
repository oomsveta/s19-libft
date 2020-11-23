/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*identity(void *x)
{
	return (x);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (!lst)
		return (NULL);
	if (!f)
		f = &identity;
	if (!(new_list = ft_lstnew(f(lst->content))))
		return (NULL);
	if (lst->next)
	{
		if (!(new_list->next = ft_lstmap(lst->next, f, del)))
		{
			ft_lstdelone(new_list, del);
			return (NULL);
		}
	}
	else
		new_list->next = NULL;
	return (new_list);
}
