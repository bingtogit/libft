/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:50:07 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/04 16:05:35 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
        t_list *p;

        if (!lst || !new)
                return;
        if (!*lst)
        {
                *lst = new;
                return;
        }
        p = *lst;
        while (p->next != NULL)
                p = p->next;
        p->next= new;
        new->next=NULL; 
}
