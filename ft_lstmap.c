/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:35:02 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/04 20:09:44 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	add_node(t_list **first, t_list **last, void *content)
{
	t_list	*ptr;

	ptr = ft_lstnew(content);
	if (!ptr)
		return (0);
	if (!*first)
	{
		*first = ptr;
		*last = ptr;
	}
	else
	{
		(*last)->next = ptr;
		*last = ptr;
	}
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*last;
	void	*content;

	first = NULL;
	last = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		if (!add_node(&first, &last, content))
		{
			del(content);
			ft_lstclear(&first, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (first);
}
