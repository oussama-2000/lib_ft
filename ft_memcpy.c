/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:36:12 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/18 16:06:06 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char dest[10] = "oussama";
// 	const char src[] = "oussama";

// 	ft_memcpy(dest, src, (sizeof(char) * 7));

// 	printf("%s\n", dest);

// 	// int dest[10];

// 	// const int src[]={1,2,3,4,5};
// 	// memcpy(dest,src,(sizeof(int)*3));

// 	// int i = 0;
// 	// while(i < 3)
// 	// {
// 	//     printf("%d\n",dest[i]);
// 	//     i++;
// 	// }
// }