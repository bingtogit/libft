/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:02:28 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/10/24 18:51:02 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
        const unsigned char *a;
        const unsigned char *b;
        size_t i;

        a = (unsigned char *)s1;
        b = (unsigned char *)s2;
        i = 0;
        while(i < n)
        {
                if (a[i] != b[i])
                        return (a[i] - b[i]);
                i++;
        }
        return (0);
}