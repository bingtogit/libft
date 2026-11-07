/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:35:02 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/07 16:06:31 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*ptr;
	void	*content;

	p = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = lst->content;
		ptr = ft_lstnew(f(content));
		if (!ptr)
		{
			ft_lstclear(&p, del);
			return (NULL);
		}
		if (!p)
			p = ptr;
		ft_lstadd_back(&p, ptr);
		lst = lst->next;
	}
	return (p);
}
int main()
{
	
}