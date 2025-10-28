/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:53:28 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/28 21:03:07 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//next_node for save the nex node
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
// void del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;

//     node1 = ft_lstnew(ft_strdup("b"));
//     node2 = ft_lstnew(ft_strdup("b"));
//     node3 = ft_lstnew(ft_strdup("c"));

//     ft_memset(node1->content,'x',sizeof(char));

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     ft_lstclear(&node1,&del);
// }