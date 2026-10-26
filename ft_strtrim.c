/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:49:57 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/10/26 12:16:11 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_in(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
        size_t x;
	char *arr;
        
        i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_in(set, s1[i]))
		i++;
	j = ft_strlen(s1) ;
        x = i;
	while (s1[j-1] && is_in(set, s1[j - 1]))
        {
		j--;
                x++;
        }
	arr = malloc((ft_strlen(s1) - x) + 1);
	if (!arr)
		return (NULL);
        x = 0;
	while (i < j)
		arr[x++] = s1[i++];
	arr[x] = '\0';
	return (arr);
}