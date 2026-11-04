/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 10:56:44 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/04 16:05:40 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*fill(char *s, long n)
{
	int	i;
	int	len;

	len = count(n);
	i = len - 1;
	s[len] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char *arr;

	arr = malloc(count((long)n) + 1);
	if (!arr)
		return (NULL);
	fill(arr, (long)n);
	return (arr);
}
