/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:15:24 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/04 16:05:24 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
        t_list *p;
        
        if (!lst || !del)
                return ;
        while (*lst)
        {
                p = (*lst)->next;
                del ((*lst)->content);
                free(*lst);
                *lst = p;
        }
}
