/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:43:16 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/28 21:00:26 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lst pointer to the head pointer
//  *lst is the actual head pointer
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL) // if list is empty (no firs node)
	{
		*lst = new; // make the new node the first and the only one in the list.
		return ;
	}
	tmp = *lst;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->next = new;
			new->next = NULL;
			return ;
		}
		tmp = tmp->next;
	}
}

// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;

//     node1 = ft_lstnew("a");
//     node2 = ft_lstnew("b");
//     node3 = ft_lstnew("y");

//     node1->next=node2;
//     node2->next=NULL;
//     ft_lstadd_back(&node1,node3);
//     printf("the length of the linked list is :%d\n",ft_lstsize(node1));
//     t_list *last_node = ft_lstlast(node1);
//     printf("the last node content is: %s\n",last_node->content);
// }
