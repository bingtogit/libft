/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:25:21 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/10/25 10:00:00 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *arr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, nmemb * size);
	return (arr);
}