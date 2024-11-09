/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:59:14 by gueberso          #+#    #+#             */
/*   Updated: 2024/11/05 12:28:11 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char str[50] = "libft machine de guerre est en marche";
//     printf("Before memset(): %s\n", str);

//     memset(str + 13, '.', 8*sizeof(char));

//     printf("After memset():  %s\n", str);

// 	char str2[50] = "libft machine de guerre est en marche";
//     printf("\nBefore ft_memset(): %s\n", str2);

//     ft_memset(str2 + 13, '.', 8*sizeof(char));

//     printf("After ft_memset():  %s\n", str2);
//     return 0;
// }
