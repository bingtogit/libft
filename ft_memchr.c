/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:40:14 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/10/25 09:49:41 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
        unsigned char *p;

        p = (unsigned char *)s;
	i = 0;
	while (i < n)
        {
                if (p[i] == (unsigned char)c)
                        return (&p[i]);
                i++;
        }
        return (NULL);
}