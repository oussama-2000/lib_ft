/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:21:14 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/28 20:52:54 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ---- why using linked lists:
// normal lists has  fixed size ,difficult of adding and removing elements ,
// is should reserve nexted places ,fast access
// linked lists has a flexible size , easy to adding or removing elements ,
//  not matter if places are not next to each other,heavy access.

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main()
// {
//     t_list *head=ft_lstnew("oussama"); // points to the new_node
//     // printf("value :[%s]\n",head->content);
//     // printf("pointer :[%p]\n",head->next);

//     t_list *node2 = ft_lstnew("amkhou");
//     printf("pointer of node 2:%p\n",node2);
//     head->next = node2;
//     printf("the pointer after linking :%p\n",head->next);
// }