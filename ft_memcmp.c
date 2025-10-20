/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:31:57 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/19 16:15:11 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			i;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
		{
			return (st1[i] - st2[i]);
		}
		i++;
	}
	return (0);
}
// int main(){
// 	char s1[]="oussama";
// 	char s2[]="ooussama";

// 	printf("%d\n",ft_memcmp(s1,s2,sizeof(char)*7));

// 	// int	n1[]={1,2,3,4};
// 	// int	n2[]={4,2,3,4};
// 	// printf("%d\n",memcmp(n1,n2,sizeof(int)*4));

// }