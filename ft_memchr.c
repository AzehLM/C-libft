/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:38:02 by gueberso          #+#    #+#             */
/*   Updated: 2024/11/05 00:26:17 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	c2;

	s2 = (unsigned char *) s;
	c2 = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (c2 == s2[i])
			return ((unsigned char *) &s2[i]);
		i++;
	}
	return (NULL);
}
