/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:15:58 by gueberso          #+#    #+#             */
/*   Updated: 2024/11/11 14:34:16 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **split, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(split[i]);
		split[i] = NULL;
		i++;
	}
	free(split);
	split = NULL;
	return (NULL);
}

static size_t	count_string(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_string(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < (count_string(s, c)))
	{
		while (s[i] && s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		split[j] = ft_substr(s, k, (i - k));
		if (!split[j++])
			return (ft_free(split, j - 1));
	}
	split[j] = 0;
	return (split);
}
