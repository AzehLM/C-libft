/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:46:58 by gueberso          #+#    #+#             */
/*   Updated: 2024/11/02 01:24:37 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('c'));
// 	printf("%d\n", isalnum('c'));
// 	printf("%d\n", ft_isalnum('V'));
// 	printf("%d\n", isalnum('V'));
// 	printf("%d\n", ft_isalnum('6'));
// 	printf("%d\n", isalnum('6'));
// 	printf("%d\n", ft_isalnum('^'));
// 	printf("%d\n", isalnum('^'));	
// }
