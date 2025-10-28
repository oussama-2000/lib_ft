/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:32:39 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/28 21:04:36 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// function takes a void * and returns a pointer (void *).
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*applied;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		applied = f(lst->content);
		new_node = ft_lstnew(applied);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// void *upper(void *content)
// {
//     char *result;
//     int i = 0;
//     char *temp;

//     result = malloc(sizeof(result));
//     temp = (char *)content;
//     while (temp[i])
//     {
//         result[i] = temp[i] - 32;
//         i++;
//     }
//     return (result);
// }
// void del(void *content)
// {
//     free(content);
// }
// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;

//     node1 = ft_lstnew(ft_strdup("oussama"));
//     node2 = ft_lstnew(ft_strdup("ahmed"));
//     node3 = ft_lstnew(ft_strdup("mohamed"));

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     printf("before [%s]\n",node1->content);
//     printf("before [%s]\n",node2->content);
//     printf("before [%s]\n",node3->content);

//     printf("---------mapping------------\n");
//     t_list *result = ft_lstmap(node1, &upper, &del);
//     while(result)
//     {
//         printf("after [%s]\n",result->content);
//         result=result->next;
//     }

//     ft_lstclear(&node1,del);

// }