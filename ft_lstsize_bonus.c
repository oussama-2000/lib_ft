/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:00:15 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/28 20:55:12 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	length;

	if (!lst)
		return (0);
	length = 0;
	while (lst)
	{
		lst = lst->next;
		length++;
	}
	return (length);
}

// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;

//     node1 = ft_lstnew("a");
//     node2 = ft_lstnew("b");
//     node3 = ft_lstnew("c");

//     // ft_lstadd_front(&node3,node2);
//     // ft_lstadd_front(&node2,node1);

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     printf("%d\n",ft_lstsize(node1));

// }