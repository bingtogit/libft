/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:46:46 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/10/26 17:02:35 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	char *arr;

	if (!s1 || !s2)
		return (NULL);
        arr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
        if(!arr)
                return (NULL);
        i = 0;
        while(s1[i])
        {
                arr[i] = s1[i];
                i++;
        }
        j = 0;
        while(s2[j])
                arr[i++] = s2[j++];
        arr[i] = '\0';
        return (arr);
}