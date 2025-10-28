/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:30:52 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/28 20:57:46 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;

//     node1 = ft_lstnew("a");
//     node2 = ft_lstnew("b");
//     node3 = ft_lstnew("c");

//     node1->next=node2;
//     node2->next=node3;
//     node3->next=NULL;
//     printf("last node :%p\n",node2->next);

//     t_list *last_node = ft_lstlast(node1);

//     printf("%p\n",last_node);
// }