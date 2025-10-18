/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:31:06 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/18 11:37:15 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c,size_t n)
{
	size_t	i;
	const unsigned char *str;

	str= (const unsigned char *)s;
	i = 0;
	while(i < n)
	{
		if(str[i] == (unsigned char )c)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char s[] = "oussama";

// 	printf("%s\n", (char *)ft_memchr(s, 's', 5)); // prints "ssama"
// 	printf("%p\n", ft_memchr(s, 'z', 5));         // prints (nil)
// }