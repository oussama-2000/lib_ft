/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:52:26 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/28 20:54:27 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *last_node;
//     t_list *new_node;

//     last_node = ft_lstnew("oussama");
//     new_node = ft_lstnew("amkhou");

//     printf("last content:%s\n",last_node->content);
//     printf("last next:%p\n",last_node->next);
//     printf("new content:%s\n",new_node->content);
//     printf("new next:%p\n",new_node->next);
//     printf("last pointer value : %p\n",last_node);

//     ft_lstadd_front(&last_node,new_node);

//     printf("----------linking----------\n");

//     printf("last content:%s\n",last_node->content);
//     printf("last next:%p\n",last_node->next);
//     printf("new content:%s\n",new_node->content);
//     printf("new next:%p\n",new_node->next);

// }