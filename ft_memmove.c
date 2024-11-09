/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:19:10 by gueberso          #+#    #+#             */
/*   Updated: 2024/11/08 12:21:53 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	if (!dest && !src)
		return (NULL);
	dest2 = (unsigned char *) dest;
	src2 = (unsigned char *) src;
	if (src > dest)
		ft_memcpy(dest2, src2, n);
	else
	{
		while (n--)
			dest2[n] = src2[n];
	}
	return (dest);
}
