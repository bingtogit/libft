/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 15:13:01 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/10/24 17:01:06 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*copy;

	i = ft_strlen(s);
	copy = malloc(i + 1);
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s, i + 1);
	return (copy);
}