/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:52:08 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/19 21:48:42 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_calloc(size_t count, size_t size)
{
	char	*res;

	res = malloc(count * size);
	if (!res)
	{
		return (NULL);
	}
	ft_bzero(res, count * size);
	return (res);
}
// int main()
// {
//     char *str=ft_calloc(4,sizeof(int));

//     int i =0;
//     while(i < 4)
//     {
//         printf("%d \n",str[i]);
//         i++;
//     }

// }