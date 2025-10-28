/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:54:41 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/28 21:01:19 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// using strdup to duplicate the content to make it freed not just read only.

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list *node1;
//     t_list *node2;

//     node1 = ft_lstnew(ft_strdup("a"));
//     node2 = ft_lstnew(ft_strdup("b"));

//     node1->next = node2;

//     ft_lstdelone(node1,&del);
// }
