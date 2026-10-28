/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:06:11 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/10/28 10:44:13 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
		{
			i++;
		}
		while (s[i] != c && s[i])
			i++;
		if (s[i - 1] != c)
			word++;
		while (s[i] == c && s[i])
		{
			i++;
		}
	}
	return (word);
}

static char	**all_arr(char *s, char c)
{
	char	**arr;
	int		i;

	i = count(s, c);
	arr = malloc((i + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (arr);
}
static char	**freekolchi(char **arr, int j)
{
	if (!arr[j])
	{
		while (j > 0)
		{
			j--;
			free(arr[j]);
		}
		free(arr);
		return (NULL);
	}
	return (arr);
}
static char	**all_str(char *s, char c)
{
	int		i;
	int		j;
	int		end;
	char	**arr;

	i = 0;
	end = 0;
	j = 0;
	arr = all_arr(s, c);
	if (!arr)
		return (NULL);
	while (s[end])
	{
		while (s[end] == c && s[end])
			end++;
		if (!s[end])
			break ;
		i = end;
		while (s[end] != c && s[end])
			end++;
		arr[j] = ft_substr(s, i, (end - i));
		if (!ft_substr(s, i, (end - i)))
			freekolchi(arr, j);
		if (!arr[j])
			return (NULL);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = all_str((char *)s, c);
	return (arr);
}
