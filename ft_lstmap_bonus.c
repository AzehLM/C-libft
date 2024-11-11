/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:38:42 by gueberso          #+#    #+#             */
/*   Updated: 2024/11/11 18:18:17 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*first_node;
	void	*tmp;

	first_node = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		n_list = ft_lstnew(tmp);
		if (!n_list)
		{
			del(tmp);
			ft_lstclear(&first_node, del);
			return (NULL);
		}
		ft_lstadd_back(&first_node, n_list);
		lst = lst->next;
	}
	return (first_node);
}
