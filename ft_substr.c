/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 10:14:58 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/04 16:00:48 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*arr;
	size_t			slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	arr = malloc(len + 1);
	if (!arr)
		return (NULL);
	i = start;
	j = 0;
	while (i < start + len)
	{
		arr[j] = s[i];
		i++;
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
