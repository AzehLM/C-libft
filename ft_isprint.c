/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:55:32 by gueberso          #+#    #+#             */
/*   Updated: 2024/11/05 00:22:38 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isprint(128));
// 	printf("%d\n", isprint(128));
// 	printf("%d\n", ft_isprint(42));
// 	printf("%d\n", isprint(42));
// 	printf("%d\n", ft_isprint(1));
// 	printf("%d\n", isprint(1));
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("%d\n", isprint('\n'));	
// }
