/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:53:28 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/30 20:07:05 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next_node;

	if (!lst || !del)
	{
		return ;
	}
	if (!*lst)
	{
		return ;
	}
	tmp = *lst;
	while (tmp)
	{
		next_node = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = next_node;
	}
	*lst = NULL;
}
