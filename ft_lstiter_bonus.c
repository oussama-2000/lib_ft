/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:03:22 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/28 21:03:42 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void upper(void *content)
// {
//     char *str = (char *)content;
//     int i= 0;
//     while(str[i])
//     {
//         str[i] = str[i] - 32;
//         i++;
//     }
// }
// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;

//     node1=ft_lstnew(ft_strdup("a"));
//     node2=ft_lstnew(ft_strdup("b"));
//     node3=ft_lstnew(ft_strdup("c"));

//     node1->next=node2;
//     node2->next=node3;
//     node3->next=NULL;

//     ft_lstiter(node1,&upper);
//     printf("%s\n",node1->content);
//     printf("%s\n",node2->content);
//     printf("%s\n",node3->content);
// }